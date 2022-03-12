#include<stdio.h>
int mat[105][105];//邻接矩阵，向下的边权值为1，向上的边权值为2
int width[100];//记录每一层节点个数
int sign[105];//记录每个节点有没有被访问过
int depth;//记录深度
int dis;//记录两点之间距离
int n;//记录节点个数
int from,to;//记录起点与终点
void dfstree(int v,int step)//用于计算树的深度与宽度
{
    width[step]++;//将该层的宽度+1
    if(step>depth)
        depth=step;//更新深度
    for(int i=1;i<=n;i++)
        if(mat[v][i]==1)//确保是往下搜索，因为向下的边权值才为1
        dfstree(i,step+1);
}
int findmax()//用于找到最宽的一层的节点数
{
    int ans=0;
    for(int i=0;i<100;i++)
        if(width[i]>ans)
        ans=width[i];
    return ans;
}
void dfsdis(int v,int distance)//用于找到起点与终点之间的路径并计算路径长度
{//v代表当前到哪个节点，distance表示已经走了多少距离
    if(v==to)
    {
        dis=distance;//如果到了就直接更新距离并返回
        return ;
    }
    sign[v]=1;//标记，防止重走，该搜索是不用走回头路的所以之后不用再回溯
    for(int i=1;i<=n;i++)
        if(mat[v][i]!=0&&sign[i]==0)
            dfsdis(i,distance+mat[v][i]);//接着搜
}
int main()
{
    int a,b;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d%d",&a,&b);
        mat[a][b]=1;mat[b][a]=2;//邻接矩阵，向下的边权值为1，向上的边权值为2
    }
    scanf("%d%d",&from,&to);
    dfstree(1,1);//从根节点开始计算深度与宽度
    dfsdis(from,0);//计算起点与终点间的距离
    printf("%d\n%d\n%d",depth,findmax(),dis);
    return 0;
}





