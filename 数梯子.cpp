#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j,m=0;
   int jie(int a);
   int zu(int a,int b);
   scanf("%d",&n);
   if(n%2==0)
   {
    for(i=n/2,j=n/2;i<=n,j>=0;i++,j--)
    m=m+zu(j,i);
   }
   if(n%2==1)
   {
   for(i=n/2+1,j=n/2;i<=n,j>=0;i++,j--)
    m=m+zu(j,i);
   }
   printf("%d",m);
   return 0;
}
int jie(int a)
{
    int i,m=1;
    for(i=1;i<=a;i++)
    m=m*i;
    return(m);
}
int zu(int a,int b)
{
    int p;
    p=jie(b)/(jie(a)*jie(b-a));
    return p;
}
