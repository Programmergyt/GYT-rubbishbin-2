#include<iostream>
#include<queue>
#define INF -2000000000
using namespace std;
int vexnum,ednum;
int v[1501][1501];
queue<int> q;
int sign[1550];//放在全区区使其初值为0
int dis[1550];
void bfs()
{
    for(int i=1;i<=vexnum;i++)dis[i]=-1;
    sign[1]=1;
    dis[1]=0;//唯有第一点距离为0
    q.push(1);
    while(!q.empty())
    {
        int temp=q.front();q.pop();
        for(int i=1;i<=vexnum;i++)
            if(dis[i]<dis[temp]+v[temp][i]&&v[temp][i])//第二个条件是为了保证图连通
        {
            dis[i]=dis[temp]+v[temp][i];
            q.push(i);
        }
    }
}
int main()
{
    int a,b,c;
    cin>>vexnum>>ednum;
    for(int i=0;i<ednum;i++)
       {
           cin>>a>>b>>c;
           if(v[a][b]<c)
            v[a][b]=c;
       }
    bfs();
    cout<<dis[vexnum];
    return 0;
}
