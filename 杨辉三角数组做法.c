#include <stdio.h>
#include <math.h>
int main()
{
 long a[20][20];
 int n,i,j,k;
 scanf("%d",&n);
 a[1][1]=1;
 a[2][1]=1;
 a[3][1]=1;
 for(i=1;i<=n;i++) //��ÿ����β���������ָ���1
 {
    a[i][1]=1;
    a[i][i]=1;
 }

 for(i=3;i<=n;i++)//�Գ���β���ÿ�����ֽ��и�ֵ
    {
    for(j=2;j<i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];
    }

 for(i=1;i<=n;i++)
   {
   for(k=n;k>=i+1;k--)
    printf("  ");
   for(j=1;j<=i;j++)
     {
     printf("%ld",a[i][j]);
     printf("   ");
     }
     printf("\n");
   }
     return 0;
}
