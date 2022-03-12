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
    if(a[i]!=a[i+1])   //计算不重复的数字的个数
    {
    k=k+1;
    }
}
printf("%d\n",k);
for(i=0;i<n;i++)
{
    if(a[i]!=a[i+1]) // 输出所有不重复的数字
    {
    printf("%d",a[i]);
    printf(" ");
    }
}
return 0;
}

