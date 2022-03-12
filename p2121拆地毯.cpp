#include<stdio.h>
#include<algorithm>
using namespace std;
int f[100001];
int vexnum,ednum,rugnum;
struct edge
{
    int fir;
    int sec;
    int value;
}edge[100001];
bool cmp(struct edge a,struct edge b)
{
    return a.value>b.value;
}
int find(int x)
{
    if(f[x]==x)return x;
    else return f[x]=find(f[x]);
}
int kruskal()
{
    int ans=0,curnum=0;
    for(int i=0;i<ednum,curnum<rugnum;i++)
    {
        if(find(edge[i].fir)!=find(edge[i].sec))
        {
            curnum++;
            ans+=edge[i].value;
            f[find(edge[i].fir)]=find(edge[i].sec);
        }
    }
    return ans;
}
int main()
{
    scanf("%d%d%d",&vexnum,&ednum,&rugnum);
    for(int i=1;i<=vexnum;i++)
    f[i]=i;
    for(int i=0;i<ednum;i++)
    scanf("%d%d%d",&edge[i].fir,&edge[i].sec,&edge[i].value);
    sort(edge,edge+ednum,cmp);
    /*for(int i=0;i<ednum;i++)
    printf("%d%d%d\n",edge[i].fir,edge[i].sec,edge[i].value);*/
    printf("%d",kruskal());
    return 0;
}










