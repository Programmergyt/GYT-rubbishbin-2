#include<stdio.h>
int n,m;
int a[500005],sum[500005];//该树状数组只有2的乘方下标位置上为数组前几项的值，其他项均与原数组值相同
int lowbit(int x)
{
    return x&(-x);
}
void add(int x,int num,int n)//将包含n个元素的数组的第x个元素加上num
{
    for(int i=x;i<=n;i+=lowbit(i))
        sum[i]+=num;
}
int getsum(int x,int n)
{
    int ans=0;
    for(int i=x;i>=1;i-=lowbit(i))
        ans+=sum[i];
    return ans;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        add(i,a[i],n);
    }
    for(int i=1;i<=m;i++)
    {
        int choice;
        scanf("%d",&choice);
        int temp1,temp2;
        scanf("%d%d",&temp1,&temp2);
        if(choice==1)
            add(temp1,temp2,n);
        else
            printf("%d\n",getsum(temp2,n)-getsum(temp1-1,n));

    }
    return 0;
}
