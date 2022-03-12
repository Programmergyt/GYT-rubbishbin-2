#include<stdio.h>
#include<algorithm>
using namespace std;
int f[5001];
int vexnum,ednum;
struct edge
{
    int fir;
    int sec;
    int value;
}edge[200001];
bool cmp(struct edge a,struct edge b)
{
    return a.value<b.value;
}
int find(int x)
{
    if(f[x]==x)return x;
    else return f[x]=find(f[x]);
}
int kruskal()
{
    int ans=0,p,i;
    for(i=0,p=0;i<ednum&&p<=vexnum-1;i++)
    {
        if(find(edge[i].fir)!=find(edge[i].sec))
        {
            ans+=edge[i].value;
            f[find(edge[i].fir)]=find(edge[i].sec);
            p++;
        }
    }
    if(p<vexnum-1)return -1;
    else return ans;
}
int main()
{
    scanf("%d%d",&vexnum,&ednum);
    for(int i=1;i<=vexnum;i++)
    f[i]=i;
    for(int i=0;i<ednum;i++)
    scanf("%d%d%d",&edge[i].fir,&edge[i].sec,&edge[i].value);
    sort(edge,edge+ednum,cmp);
    int ans=kruskal();
    if(ans!=-1)printf("%d",ans);
    else printf("orz");
    return 0;
}


