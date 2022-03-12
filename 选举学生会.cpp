#include <bits/stdc++.h>
using namespace std;
#define N 2000000
int main()
{
    int a[N],n,i,temp,j,m;
    cin>>m>>n;
    for(i=1;i<=n;i++)
    cin>>a[i];
    for(i=1;i<=n;i++)
        {for(j=n;j>=i+1;j--)
        if(a[j]<a[j-1])
        {temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;}}
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
