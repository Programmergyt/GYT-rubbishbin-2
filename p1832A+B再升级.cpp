#include<stdio.h>
long long a[1100]={1};
int n;
int isPrime(int n)//�ж�����
{
    if(n==1)return 0;
    if(n==2)return 1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)return 0;
    return 1;
}
void Primetable()
{
   for(int i=2;i<=n;i++)//ѭ��ÿ����ȡ��ȡ
		if(isPrime(i))//���������ܿ����Ƿ���ȡ
		for(int j=i;j<=n;j++)//��i��ʼ��n,��Ϊ��Ҫ�õ������϶���С��ȡ����
           a[j]+=a[j-i];////ȡ������������ȥ��������������ۼӵ��ܷ�����
}
int main()
{
    scanf("%d",&n);
    Primetable();
    printf("%lld ",a[n]);
    return 0;
}


