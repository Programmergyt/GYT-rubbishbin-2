#include <bits/stdc++.h>
#include <algorithm>
#define N 10000
using namespace std;
int main()
{
    int i,n,a[N];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i=i+2)
        {
        sort(&a[0],&a[i+1]);
        printf("%d\n",a[i/2]);
        }
    return 0;
}
