#include<stdio.h>
int n,m;
int a[500005],sum[500005];//����״����ֻ��2�ĳ˷��±�λ����Ϊ����ǰ�����ֵ�����������ԭ����ֵ��ͬ
int lowbit(int x)
{
    return x&-x;
}
void add(int x,int num,int n)//������n��Ԫ�ص�����ĵ�x��Ԫ�ؼ���num
{
    for(int i=x;i<=n;i+=lowbit(i))
        sum[i]+=num;
}
void range_add(int l, int r, int x,int n)
{ //�������������൱�ڸ�����[l, r]����x,֮���ѯʱ�����������ͻ���ϸüӵ�����
    add(l,x,n), add(r+1,-x,n);
}
int ask(int p)
{ //�����ѯ
    int res = 0;
    while(p) res += sum[p], p -= p & -p;
    return res;
}
int main()
{
    scanf("%d%d",&n,&m);
    int last = 0, now;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&now);
        add(i,now-last,n);//�����м�¼ÿ�������ϸ����Ĳ�
        last=now;
    }
    for(int i=1;i<=m;i++)
    {
        int choice;
        scanf("%d",&choice);
        int temp1,temp2,temp3;
        if(choice==1)
            {
              scanf("%d%d%d",&temp1,&temp2,&temp3);
              range_add(temp1,temp2,temp3,n);
            }
        else
            {
                scanf("%d",&temp1);
                printf("%d\n",ask(temp1));
            }
    }

    return 0;
}
