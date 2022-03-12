#include <stdio.h>
#define N 2000010
int main()
{
   int n,m,i,j,k,g;
   int a[N];
   int b[N];
   printf("输入学生个数和询问次数");
   scanf("%d %d",&n,&m);
   for(i=1;i<=n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(j=1;j<=m;j++)
   {
   scanf("%d",&b[j]);
   }
   for(k=1;k<=m;k++)
   {
   g=b[k];
   printf("%d\n",a[g]);
   }
   return 0;
}
