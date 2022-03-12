#include<iostream>
#include<string>
#include <algorithm>//包含reverse函数可用于字符串逆序
using namespace std;
string after(string mid,string pre)
{
    if(mid==pre)//当中，前序相同时，树只有根与右子树，后序为中，前序的逆序
    {
        reverse(mid.begin(),mid.end());//字符串逆序
        return mid;
    }
    int n=mid.find(pre[0]);//表示根节点在中序排列中的下标
    string leftmid=mid.substr(0,n);//表示左子树的中序排列1
    string leftpre=pre.substr(1,n);//表示左子树的前序排列
    string rightmid=mid.substr(n+1,mid.length()-(n+1));//表示右子树中序列排列
    string rightpre=pre.substr(n+1,pre.length()-1);//表示右子树前序排列
    return after(leftmid,leftpre)+after(rightmid,rightpre)+pre[0];//返回左子树后序排列+右子树后序排列+根节点
}
int main()
{
     string mid,pre;
     cin>>mid;
     cin>>pre;
     cout<<after(mid,pre)<<endl;
     return 0;
}
