#include<stdio.h>
int n,m;
int a[500005],sum[500005];//该树状数组只有2的乘方下标位置上为数组前几项的值，其他项均与原数组值相同
int lowbit(int x)
{
    return x&-x;
}
void add(int x,int num,int n)//将包含n个元素的数组的第x个元素加上num
{
    for(int i=x;i<=n;i+=lowbit(i))
        sum[i]+=num;
}
void range_add(int l, int r, int x,int n)
{ //下面两个函数相当于给区间[l, r]加上x,之后查询时遇到这个区间就会加上该加的数字
    add(l,x,n), add(r+1,-x,n);
}
int ask(int p)
{ //单点查询
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
        add(i,now-last,n);//数组中记录每个数与上个数的差
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
