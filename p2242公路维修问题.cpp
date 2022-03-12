#include<stdio.h>
int a[15500],n,m,temp,pre,first,last,sum;
int main()
{
    scanf("%d%d",&n,&m);
    if(m>n){printf("0");return 0;}
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            scanf("%d",&temp);
            first=pre=temp;
        }
        else if(i==n-1)
        {
            scanf("%d",&temp);
            a[i]=temp-pre;
            last=temp;
        }
        else
        {
            scanf("%d",&temp);
            a[i]=temp-pre;
            pre=temp;
        }
    }
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    sum=last-first+1;
    for(int i=0;i<m-1;i++)
        sum-=(a[i]-1);
    printf("%d",sum);
    return 0;
}
