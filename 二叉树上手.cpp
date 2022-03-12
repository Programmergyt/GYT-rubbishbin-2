#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[100000],k,b[100000],j,t,max;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    b[1]=a[1];
    for(i=1,k=2;i<=n;i=1+2*i,k=k+1)
       {
       for(j=i+1;j<=1+2*i;j++)
       b[k]=b[k]+a[j];
       }
       t=b[1];
    for(i=1;i<=n;i++)
    if(b[i+1]>t)
    {
     t=b[i+1];
     max=i+1;
    }
    printf("%d",max);
    return 0;
}
