#include<iostream>
#include<string>
#include <algorithm>//����reverse�����������ַ�������
using namespace std;
string after(string mid,string pre)
{
    if(mid==pre)//���У�ǰ����ͬʱ����ֻ�и���������������Ϊ�У�ǰ�������
    {
        reverse(mid.begin(),mid.end());//�ַ�������
        return mid;
    }
    int n=mid.find(pre[0]);//��ʾ���ڵ������������е��±�
    string leftmid=mid.substr(0,n);//��ʾ����������������1
    string leftpre=pre.substr(1,n);//��ʾ��������ǰ������
    string rightmid=mid.substr(n+1,mid.length()-(n+1));//��ʾ����������������
    string rightpre=pre.substr(n+1,pre.length()-1);//��ʾ������ǰ������
    return after(leftmid,leftpre)+after(rightmid,rightpre)+pre[0];//������������������+��������������+���ڵ�
}
int main()
{
     string mid,pre;
     cin>>mid;
     cin>>pre;
     cout<<after(mid,pre)<<endl;
     return 0;
}
