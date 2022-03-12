#include <stdio.h>
#include <math.h>
bool zhi(int a)
 {
 int i;
 if(a==1)
 return false;
 else
 {
 for(i=2;i*i<=a;i++)
 {
 if(a%i==0)
 {
 return false;
 break;
 }
 }
 }
 }
 int main()
 {
  int n,i,j;
  scanf("%d",&n);
  for(i=4;i<=n;i=i+2)
    for(j=1;j<n;j++)
    {
    if(zhi(j)==true&&zhi(i-j)==true)
    {
    printf("%d=%d+%d\n",i,j,i-j);
    break;
    }
    }
    return 0;
 }

 /*
    } */
