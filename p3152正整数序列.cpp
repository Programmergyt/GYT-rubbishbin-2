#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num=0;
    cin>>n;
    while(n)
    {
        num++;
        n/=2;
    }
    cout<<num;
    return 0;
}
