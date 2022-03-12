#include<stdio.h>
int s1,s2,s3,s4;
int a1[65],a2[65],a3[65],a4[65];
int Max[5];//左脑的最大值最小时即为花费的时间
int Total[5];//总和
int ans;
int addtotal(int a[],int n)//数组求和
{
    int ans=0;
    for(int i=0;i<n;i++)
    ans+=a[i];
    return ans;
}
int max(int a,int b)
{//求最大值，为了防止9/2=4的情况发生，因为总和为奇数时左脑最大值应除2加1
    return a>b ? a:b;
}
void dfs(int a[],int s,int n,int pre,int sum)
{//a[]为数组，s为数组元素数，n表示为第几个数组，pre是上一个搜到的元素的下标，sum是已经加好的总和
    if(sum>=Total[n]/2)//sum不小于数组总和除2时结束搜索
    {
        if(Max[n]==0)Max[n]=sum;//Max=0时直接将sum赋值给Max
        else {if(sum<Max[n])Max[n]=sum;}//用更小的sum更新Max
        return ;
    }
    for(int i=pre+1;i<s;i++)//接着累加并搜索
        dfs(a,s,n,i,sum+a[i]);
}
int main()
{
    int i;
    scanf("%d%d%d%d",&s1,&s2,&s3,&s4);
    for(i=0;i<s1;i++)scanf("%d",&a1[i]);Total[1]=addtotal(a1,s1);//输入并求和
    for(i=0;i<s2;i++)scanf("%d",&a2[i]);Total[2]=addtotal(a2,s2);
    for(i=0;i<s3;i++)scanf("%d",&a3[i]);Total[3]=addtotal(a3,s3);
    for(i=0;i<s4;i++)scanf("%d",&a4[i]);Total[4]=addtotal(a4,s4);
    dfs(a1,s1,1,-1,0);dfs(a2,s2,2,-1,0);dfs(a3,s3,3,-1,0);dfs(a4,s4,4,-1,0);//搜索左右脑花费时间最相近时花费的时间
    for(i=1;i<=4;i++)//将四科的时间加起来
    ans+=max(Max[i],Total[i]-Max[i]);//求最大值，为了防止9/2=4的情况发生，因为总和为奇数时左脑最大值应除2加1
    printf("%d",ans);
    return 0;
}
