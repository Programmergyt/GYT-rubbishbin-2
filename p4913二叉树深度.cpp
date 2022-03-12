#include<iostream>
using namespace std;
struct node
{
    int left;
    int right;
}node[1000005];
int vexnum;
int sign[1000005];
int depth;
void dfs(int vex,int step)
{
    sign[vex]=1;
    if(step>depth)depth=step;
    if(sign[node[vex].left]==0&&node[vex].left!=0)dfs(node[vex].left,step+1);
    if(sign[node[vex].right]==0&&node[vex].right!=0)dfs(node[vex].right,step+1);
}
int main()
{
    cin>>vexnum;
    for(int i=1;i<=vexnum;i++)
        cin>>node[i].left>>node[i].right;
    dfs(1,1);
    cout<<depth;
    return 0;
}
