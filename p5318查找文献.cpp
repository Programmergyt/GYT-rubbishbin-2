#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<int, vector<int>,greater<int> > pr1[100005];//����ʱ��
priority_queue<int, vector<int>,greater<int> > pr2[100005];//����ʱ��
queue<int>q;
int vexnum,ednum;
int sign[100005];
void bfs(int v)//��������������õݹ�д
{
    sign[v]=1;//������
    cout<<v<<" ";
    q.push(v);//������
    while(!q.empty())//�����ӣ�������
    {
        int vex=q.front();q.pop();//������ͷ
        while(!pr2[vex].empty())//������ͷ��ÿ���ڽӵ�
        {
            if(sign[pr2[vex].top()]==0)
            {
               cout<<pr2[vex].top()<<" ";
               sign[pr2[vex].top()]=1;
               q.push(pr2[vex].top());
            }
            pr2[vex].pop();//������֮��͵���
        }
    }
}
void dfs(int v)//��������
{
   cout<<v<<" ";
   sign[v]=1;
   while(!pr1[v].empty())
   {
       if(sign[pr1[v].top()]==0)
       dfs(pr1[v].top());
       pr1[v].pop();
   }
}
int main()
{
    int a,b;
    cin>>vexnum>>ednum;
    for(int i=0;i<ednum;i++)
    {
        cin>>a>>b;
        pr1[a].push(b);pr2[a].push(b);
    }
    dfs(1);
    cout<<endl;for(int i=1;i<=vexnum;i++)sign[i]=0;//���������ñ��
    bfs(1);
    return 0;
}
