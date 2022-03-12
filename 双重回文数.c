#include<stdio.h>
#include<math.h>
int hui(long long a)
{
    long long m,i;
    i=a;m=0;
    while(i!=0)
    {
     m=m*10+i%10;
     i=i/10;
    }
    if(m==a)
    return 1;
    else
    return 0;
}
long long change(int num,int jin)
{
   long long ans=0,i=0;
   while(num!=0)
    {
    ans=ans+num%jin*pow(10,i);
    num=num/jin;
    i++;
    }
    return ans;
}
int main()
{
    int n,s,i,sum=0,j=0,jin;
    scanf("%d%d",&n,&s);
      for(i=s+1;sum<n;i++)
        {
        j=0;
        for(jin=2;jin<=10;jin++)
        if(hui(change(i,jin))==1)
         j++;
        if(j>=2)
        {printf("%d\n",i);sum++;}
        }

    return 0;
}

