#include<iostream>
#include<string>
#include<map>
using namespace std;
map<string,string> m;
char c;//��������
string find(string x)//������
{
    if(x==m[x])return x;
    else return m[x]=find(m[x]);
}
int main()
{
    string fat,son;//�ְ������
    while(1)
    {
        cin>>c;
        if(c=='#')
        {
            cin>>fat;
            if(m.count(fat)==1)//�������ְֻ��аְ־Ͱ������ڸ�������ְ�
                fat=m[fat];
            else
                m[fat]=fat;//�����û���ڣ���ô�����ھ������Լ�
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

