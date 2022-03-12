#include<stdio.h>
int mat[105][105];//邻接矩阵
int sign[105];//颜色标记，0代表无色，1-Cnum每个数代表一个颜色
int Enum;//边数
int Vnum;//顶点数
int Cnum;//颜色数
int ans;//答案
int canDraw(int n,int color)//判断下标为n的点能否涂color颜色
{
    if(sign[n]!=0)return 0;//如果涂过色就不能涂
    for(int i=0;i<Vnum;i++)
        if(mat[i][n]==1)//如果有边相连且边的另一端点颜色与color相等
        {
            if(sign[i]!=0&&sign[i]==color)
                return 0;
        }
    return 1;
}
void dfs(int n,int color)//往下标为n的顶点涂color颜色，要确保该点是可以涂抹该颜色的
{
    if(n==Vnum-1)//如果最后一个顶点都有色可涂
    {
        ans++;//答案+1
        return ;
    }
    sign[n]=color;//涂色
    for(int j=1;j<=Cnum;j++)
      if(canDraw(n+1,j))//确保搜索到的点都是可以涂抹颜色的
       dfs(n+1,j);//按下标顺序，每次往后搜下标+1的顶点
    sign[n]=0;//搜索完之后回溯
}
int main()
{
    int a,b;
    scanf("%d%d%d",&Vnum,&Enum,&Cnum);
    for(int i=0;i<Enum;i++)
    {
        scanf("%d%d",&a,&b);
        mat[a-1][b-1]=mat[b-1][a-1]=1;
    }
    for(int i=1;i<=Cnum;i++)//统计每种初始情况的方案数总和
       dfs(0,i);//把每种颜色都在0号顶点抹一遍
    printf("%d",ans);
    return 0;
}







