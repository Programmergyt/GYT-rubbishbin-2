#include<stdio.h>
#include<math.h>
int N=1002;
int main()
{
    int a[N][N],i,j,k,n,m,x1,x2,y1,y2;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        a[i][j]=0;
    scanf("%d%d",&n,&m);
    for(k=0;k<m;k++)
    {
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    for(i=x1;i<=x2;i++)
        for(j=y1;j<=y2;j++)
        a[i][j]++;
    }
    k=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
       {
        k++;
        printf("%d ",a[i][j]);
        if(k%n==0)
        printf("\n");
       }
    return 0;
}
