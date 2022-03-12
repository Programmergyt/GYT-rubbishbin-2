#include<stdio.h>
#include<stdlib.h>
#define INF 2000000000
using namespace std;
int vexnum,ednum;
int stpoint;//起点与终点
int dis[100001];
int sign[100001];
int ans[100001];
struct node
{
    int des;//表示边的终点
    int value;
    struct node *next;
};
typedef node* linknode;
linknode createlist()//创建链表头
{
    linknode p;
    p=(linknode)malloc(sizeof(linknode));
    p->next=NULL;p->des=0;p->value=0;
    return p;
}
linknode heads[100001];//对图中每个点创建链表以存储边
void insertedge(int start,int Des,int Value)//插入有向边，由于该题是无向图所以每条边插2遍
{
    linknode p;
    p=(linknode)malloc(sizeof(linknode));
    p->des=Des;p->value=Value;
    p->next=heads[start]->next;
    heads[start]->next=p;
}
int findmin()//从众多转款选项中找出留下钱最多的选项
{
    int min=INF;int ans=0;
    for(int i=1;i<=vexnum;i++)
        if(dis[i]<min&&sign[i]==0)
        {min=dis[i];ans=i;}
    return ans;
}
void Dijstra(int start)
{
    int temp;
    for(int i=1;i<=vexnum;i++)dis[i]=INF;
    for(linknode p=heads[start]->next;p!=NULL;p=p->next)
        dis[p->des]=p->value;//用源点的邻接点初始化dis数组
    dis[start]=0;sign[start]=1;//打上标记
    for(int i=1;i<vexnum;i++)
    {
        temp=findmin();//每次找出剩钱最多的选项并加以标记
        ans[temp]=dis[temp];
        sign[temp]=1;
        for(linknode p=heads[temp]->next;p!=NULL;p=p->next)
        {
            if(sign[p->des]==0&&dis[p->des]>dis[temp]+p->value)//每次以temp的邻接点更新dis数组
                dis[p->des]=dis[temp]+p->value;
        }
    }
    for(int i=1;i<=vexnum;i++)
        printf("%d ",ans[i]);
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&vexnum,&ednum,&stpoint);
    for(int i=1;i<=vexnum;i++)
    heads[i]=createlist();
    for(int i=0;i<ednum;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        insertedge(a,b,c);
        insertedge(b,a,c);
    }
    Dijstra(stpoint);
    return 0;
}



