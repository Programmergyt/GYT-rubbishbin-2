#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n;
    int m;
    scanf("%d",&n);
    cin>>s;
    for(m=s.length()-1;s[m]=='0';m--);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='0'&&i!=m)
        cout<<s[i]<<"*"<<n<<"^"<<s.length()-i-1<<"+";
        if(i==m)
        cout<<s[i]<<"*"<<n<<"^"<<s.length()-i-1;
    }
    return 0;
}

