#include<stdio.h>
int n;
int Max;
int a[1001];
int v[1001];
int abs(int a)
{
    return a>0 ? a:-a;
}
int value(int m,int n)
{
    return m==n ? abs(a[n]):abs((a[n]-a[m])*(n-m+1));
}
int max(int a,int b)
{
    return a>b ? a:b;
}
void bagtable()
{
     for(int i=1;i<=n;i++)
        {
         v[i] = max(v[i],v[i-1]+a[i]);
         for(int j=2;j<=i;j++)
         v[i]=max(v[i], v[i-j]+value(i-j +1,i));
        }
}
//v[i]表示删到第i个数时的最大值,j枚举前面一起删去的区间长度
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    bagtable();
    printf("%d",v[n]);
    return 0;
}
