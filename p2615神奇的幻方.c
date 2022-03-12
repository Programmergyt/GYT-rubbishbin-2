#include<stdio.h>
#include<math.h>
int main()
{
    int a[40][40],n,r,c,s,i,j;
    scanf("%d",&n);
    r=0;c=n/2;
    for(i=0;i<40;i++)
        for(j=0;j<40;j++)
    a[i][j]=0;
    a[0][n/2]=1;
    for(i=2;i<=n*n;i++)
    {
        if(r==0&&c!=n-1)
        {
            r=n-1;c=c+1;
            a[r][c]=i;
        }
        else if(r!=0&&c==n-1)
        {
            r=r-1;c=0;
            a[r][c]=i;
        }
        else if(r==0&&c==n-1)
        {
            r=r+1;
            a[r][c]=i;
        }
        else if(r!=0&&c!=n-1)
        {
            if(a[r-1][c+1]==0)
            {
                r=r-1;c=c+1;
                a[r][c]=i;
            }
            else
            {
                r=r+1;c=c;
                a[r][c]=i;
            }
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
        printf("%d ",a[i][j]);
        if((j+1)%(n)==0)
        printf("\n");
        }
    return 0;
}

