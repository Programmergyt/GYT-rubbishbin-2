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
        while(!q.empty()&&q.back().num<=a[i].num)q.pop_back();//ÿ����һ�����֣����ѱ���С������ɾ������Ϊ��ĿֻҪ�󵯳��������
        q.push_back(a[i]);//Ȼ���ٽ�a[i]β��
        if(q.front().id==i-k)q.pop_front();
        if(i>=k)cout<<q.front().num<<endl;
    }
    return 0;
}
