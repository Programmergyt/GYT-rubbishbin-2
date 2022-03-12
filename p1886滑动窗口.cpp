#include<iostream>
#include<deque>
using namespace std;
struct node
{
    int num;
    int id;
}a[1000001];
deque<node>qmin,qmax;
int n,k;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i].num,a[i].id=i;
    for(int i=1;i<=n;i++)
    {
        while(!qmin.empty()&&qmin.back().num>a[i].num)qmin.pop_back();
        qmin.push_back(a[i]);
        if(qmin.front().id==i-k)qmin.pop_front();
        if(i>=k)cout<<qmin.front().num<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        while(!qmax.empty()&&qmax.back().num<a[i].num)qmax.pop_back();
        qmax.push_back(a[i]);
        if(qmax.front().id==i-k)qmax.pop_front();
        if(i>=k)cout<<qmax.front().num<<" ";
    }
    return 0;
}







