#include<iostream>
#include<queue>
using namespace std;
struct node
{
    int num;
    int id;
};
deque<node>q;
struct node a[2000005];
int main()
{
    int n,k,temp;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>a[i].num,a[i].id=i;
    for(int i=1;i<=n;i++)
    {
        while(!q.empty()&&q.back().num<=a[i].num)q.pop_back();//每进来一个数字，都把比它小的数字删掉，因为题目只要求弹出最大数字
        q.push_back(a[i]);//然后再将a[i]尾插
        if(q.front().id==i-k)q.pop_front();
        if(i>=k)cout<<q.front().num<<endl;
    }
    return 0;
}
