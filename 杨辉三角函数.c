#include<stdio.h>
#include<math.h>
long long jie(long a)
{
   unsigned long long r,h;
  h=1;
  for(r=1;r<=a;r++)
    {
    h=h*r;
    }
    return(h);
}
 unsigned long long  main()
{
   long long jie(long a);
   long n,i,j,k,m,p;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      {
      for(j=0;j<i;j++)
      {
       k=jie(i-1);
       m=jie(i-1-j)*jie(j);
       p=k/m;
       printf("%lld",p);
       printf(" ");
      }
      printf("\n");
      }
      return 0;
}
