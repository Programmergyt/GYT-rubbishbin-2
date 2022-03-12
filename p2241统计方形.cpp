#include<stdio.h>
int n,m;
unsigned long long sqr,rec;
int abs(int a)
{
    return a>0 ? a:-a;
}
int max(int a,int b)
{
    return a>b ? a:b;
}
int min(int a,int b)
{
    return a<b ? a:b;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)//统计以每个点为左上角的正方形及长方形个数
        for(int j=0;j<m;j++)
    {
        sqr+=min(n-i,m-j);//正方形数量
        rec+=(n-i)*(m-j)-min(n-i,m-j);//总数量减去正方形数量等于长方形数量
    }
    printf("%lld %lld",sqr,rec);
    return 0;
}








