#include<stdio.h>
long long a[1100]={1};
int n;
int isPrime(int n)//判断素数
{
    if(n==1)return 0;
    if(n==2)return 1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}
void Primetable()
{
   for(int i=2;i<=n;i++)//循环每个数取或不取
		if(isPrime(i))//是素数才能考虑是否能取
		for(int j=i;j<=n;j++)//从i开始到n,因为你要得到的数肯定不小于取的数
           a[j]+=a[j-i];////取这个素数，则减去这个素数方案数累加到总方案数
}
int main()
{
    scanf("%d",&n);
    Primetable();
    printf("%lld ",a[n]);
    return 0;
}


