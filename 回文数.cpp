#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,m,jin,p=0,y=0,k;
    int hui(int n);
    bool hua(int n);
    int wei(int a);
    scanf("%d",&jin);
    scanf("%d",&n);
    k=wei(n);
    for(i=0;i<k;i++)
    {
    y=n%10;
    n=n/10;
    p=p+y*pow(jin,i);
    }
    for(i=0;hua(p)==0;i++)
    {
    p=p+hui(p);
    if(i>30)
    {
    printf("Impossible!");
    break;
    }
    }
    printf("STEP=%d\n",i);
    return 0;
}





int hui(int n)
{
    int i,m;
    i=n;m=0;
    while(i)
    {
        m=m*10+i%10;
        i=i/10;
    }
    return(m);
}
bool hua(int n)
{
    int i,m;
    i=n;m=0;
    while(i)
    {
        m=m*10+i%10;
        i=i/10;
    }
    return(m==n);
}
int wei(int a)
{
    int i=0;
    while(a!=0)
    {
    a=a/10;
    i=i+1;
    }
    return(i);
}
