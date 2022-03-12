#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,string> m;
char c;//操作符号
string find(string x)//找祖宗
{
    if(x==m[x])return x;
    else return m[x]=find(m[x]);
}
int main()
{
    string fat,son;//爸爸与儿子
    while(1)
    {
        cin>>c;
        if(c=='#')
        {
            cin>>fat;
            if(m.count(fat)==1)//如果这个爸爸还有爸爸就把他祖宗赋给这个爸爸
                fat=m[fat];
            else
                m[fat]=fat;//如果他没祖宗，那么他祖宗就是他自己
        }
        else if(c=='+')
        {
            cin>>son;
            m[son]=fat;
        }
        else if(c=='?')
        {
            cin>>son;
            cout<<son<<" "<<find(son)<<endl;
        }
        else
        break;
    }
    return 0;
}

