#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
int a[100] ;
int i,n,k;
k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(&a[0],&a[n]);
for(i=0;i<n;i++)
{
    if(a[i]!=a[i+1])   //���㲻�ظ������ֵĸ���
    {
    k=k+1;
    }
}
printf("%d\n",k);
for(i=0;i<n;i++)
{
    if(a[i]!=a[i+1]) // ������в��ظ�������
    {
    printf("%d",a[i]);
    printf(" ");
    }
}
return 0;
}

