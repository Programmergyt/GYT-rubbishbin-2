#include<stdio.h>
int s1,s2,s3,s4;
int a1[65],a2[65],a3[65],a4[65];
int Max[5];//���Ե����ֵ��Сʱ��Ϊ���ѵ�ʱ��
int Total[5];//�ܺ�
int ans;
int addtotal(int a[],int n)//�������
{
    int ans=0;
    for(int i=0;i<n;i++)
    ans+=a[i];
    return ans;
}
int max(int a,int b)
{//�����ֵ��Ϊ�˷�ֹ9/2=4�������������Ϊ�ܺ�Ϊ����ʱ�������ֵӦ��2��1
    return a>b ? a:b;
}
void dfs(int a[],int s,int n,int pre,int sum)
{//a[]Ϊ���飬sΪ����Ԫ������n��ʾΪ�ڼ������飬pre����һ���ѵ���Ԫ�ص��±꣬sum���Ѿ��Ӻõ��ܺ�
    if(sum>=Total[n]/2)//sum��С�������ܺͳ�2ʱ��������
    {
        if(Max[n]==0)Max[n]=sum;//Max=0ʱֱ�ӽ�sum��ֵ��Max
        else {if(sum<Max[n])Max[n]=sum;}//�ø�С��sum����Max
        return ;
    }
    for(int i=pre+1;i<s;i++)//�����ۼӲ�����
        dfs(a,s,n,i,sum+a[i]);
}
int main()
{
    int i;
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    for(i=0;i<s1;i++)scanf("%d",&a1[i]);Total[1]=addtotal(a1,s1);//���벢���
    for(i=0;i<s2;i++)scanf("%d",&a2[i]);Total[2]=addtotal(a2,s2);
    for(i=0;i<s3;i++)scanf("%d",&a3[i]);Total[3]=addtotal(a3,s3);
    for(i=0;i<s4;i++)scanf("%d",&a4[i]);Total[4]=addtotal(a4,s4);
    dfs(a1,s1,1,-1,0);dfs(a2,s2,2,-1,0);dfs(a3,s3,3,-1,0);dfs(a4,s4,4,-1,0);//���������Ի���ʱ�������ʱ���ѵ�ʱ��
    for(i=1;i<=4;i++)//���ĿƵ�ʱ�������
    ans+=max(Max[i],Total[i]-Max[i]);//�����ֵ��Ϊ�˷�ֹ9/2=4�������������Ϊ�ܺ�Ϊ����ʱ�������ֵӦ��2��1
    printf("%d",ans);
    return 0;
}
