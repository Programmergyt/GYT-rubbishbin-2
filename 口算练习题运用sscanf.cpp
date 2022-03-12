#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b;
    char s[100],c[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        memset(s,0,sizeof(s));
        cin>>c[0];
        if(c[0]>='a'&&c[0]<='c')
            cin>>a>>b;
        else
            {
            sscanf(c,"%d",&a);
            cin>>b;
            }
        if(c[0]=='a')
            sprintf(s,"%d+%d=%d",a,b,a+b);
        if(c[0]=='b')
            sprintf(s,"%d-%d=%d",a,b,a-b);
        if(c[0]=='c')
            sprintf(s,"%d*%d=%d",a,b,a*b);
        cout<<s<<endl<<strlen(s)<<endl;
    }
   return 0;
}
