#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
priority_queue<int, vector<int>,greater<int> > pr1[100005];//深搜时用
priority_queue<int, vector<int>,greater<int> > pr2[100005];//广搜时用
queue<int>q;
int vexnum,ednum;
int sign[100005];
void bfs(int v)//广度优先搜索不用递归写
{
    sign[v]=1;//标记起点
    cout<<v<<" ";
    q.push(v);//起点入队
    while(!q.empty())//层层入队，层层输出
    {
        int vex=q.front();q.pop();//弹出队头
        while(!pr2[vex].empty())//遍历队头的每个邻接点
        {
            if(sign[pr2[vex].top()]==0)
            {
               cout<<pr2[vex].top()<<" ";
               sign[pr2[vex].top()]=1;
               q.push(pr2[vex].top());
            }
            pr2[vex].pop();//遍历完之后就弹出
        }
    }
}
void dfs(int v)//经典深搜
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
    cout<<endl;for(int i=1;i<=vexnum;i++)sign[i]=0;//换行与重置标记
    bfs(1);
    return 0;
}
