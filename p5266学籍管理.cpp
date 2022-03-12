#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,int> m;//map可以理解为一个下标为任意类型的数组，内部实现原理与二叉搜索树有关
string s;
int main()
{
    int n,choice,score;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>choice;
        switch(choice)
        {
        case 1:
            cin>>s>>score;
            if(m.count(s)==0)
                m[s]=score;
            else
                {m[s]=score;}
            cout<<"OK"<<endl;
            break;
        case 2:
            cin>>s;
            if(m.count(s)==0)cout<<"Not found"<<endl;
            else cout<<m[s]<<endl;
            break;
        case 3:
            cin>>s;
            if(m.count(s)==0)cout<<"Not found"<<endl;
            else {m.erase(s);cout<<"Deleted successfully"<<endl;}
            break;
        case 4:
            cout<<m.size()<<endl;
            break;
        }
    }
    return 0;
}
