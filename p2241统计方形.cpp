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
    for(int i=0;i<n;i++)//ͳ����ÿ����Ϊ���Ͻǵ������μ������θ���
        for(int j=0;j<m;j++)
    {
        sqr+=min(n-i,m-j);//����������
        rec+=(n-i)*(m-j)-min(n-i,m-j);//��������ȥ�������������ڳ���������
    }
    printf("%lld %lld",sqr,rec);
    return 0;
}








