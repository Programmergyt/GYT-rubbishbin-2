#include<stdio.h>
#define INF 2147483647
#define MAX 10000
int dist[10001];
int matrix[1001][1001];
int vexnum;
int edgenum;
int vs;//源点
int flag[MAX];
void dijkstra()
{
    int i,j,k;
    int min;
    int tmp;     // flag[i]=1表示"顶点vs"到"顶点i"的最短路径已成功获取。

    // 初始化
    for (i = 0; i < vexnum; i++)
    {
        flag[i] = 0;              // 顶点i的最短路径还没获取到。             // 顶点i的前驱顶点为0。
        dist[i] = matrix[vs][i];// 顶点i的最短路径为"顶点vs"到"顶点i"的权。
    }

    // 对"顶点vs"自身进行初始化
    flag[vs] = 1;
    dist[vs] = 0;

    // 遍历G.vexnum-1次；每次找出一个顶点的最短路径。
    for (i = 0; i < vexnum; i++)
    {
        // 寻找当前最小的路径；
        // 即，在未获取最短路径的顶点中，找到离vs最近的顶点(k)。
        min = INF;
        for (j = 0; j < vexnum; j++)
        {
            if (flag[j]==0 && dist[j]<min)
            {
                min = dist[j];
                k = j;
            }
        }
        // 标记"顶点k"为已经获取到最短路径
        flag[k] = 1;

        // 修正当前最短路径和前驱顶点
        // 即，当已经"顶点k的最短路径"之后，更新"未获取最短路径的顶点的最短路径和前驱顶点"。
        for (j = 0; j < vexnum; j++)
        {
            tmp = (matrix[k][j]==INF ? INF : (min + matrix[k][j])); // 防止溢出
            if (flag[j] == 0 && (tmp  < dist[j]) )
            {
                dist[j] = tmp;
            }
        }
    }
    // 打印dijkstra最短路径的结果
    for (i = 0; i < vexnum; i++)
        printf("%d ", dist[i]);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&vexnum,&edgenum,&vs);vs--;
    for(int i=0;i<vexnum;i++)
        for(int j=0;j<vexnum;j++)
        {
        matrix[i][j]=INF;
        }
    for(int i=0;i<edgenum;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c<matrix[a-1][b-1])
        matrix[a-1][b-1]=c;
    }
    dijkstra();
}












