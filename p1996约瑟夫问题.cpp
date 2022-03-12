#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[150],n,m,i,j,flag=0,num;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    a[i]=i;
    i=1;num=n;
    while(n>0)
    {

        if(a[i]!=0)
        {
            flag++;
            if(flag==m)
            {
            printf("%d ",a[i]);
            flag=0;
            a[i]=0;
            n--;
            }
        }
        i++;
        if(i>num)
        {
           for(j=1;j<num;j++)
           if(a[j]!=0)
           {i=j;break;}
        }
    }
    return 0;
}
