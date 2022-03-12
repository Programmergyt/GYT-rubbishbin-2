#include<stdio.h>
#include<stdlib.h>
#define INF 2000000000
using namespace std;
int vexnum,ednum;
int stpoint;//������յ�
int dis[100001];
int sign[100001];
int ans[100001];
struct node
{
    int des;//��ʾ�ߵ��յ�
    int value;
    struct node *next;
};
typedef node* linknode;
linknode createlist()//��������ͷ
{
    linknode p;
    p=(linknode)malloc(sizeof(linknode));
    p->next=NULL;p->des=0;p->value=0;
    return p;
}
linknode heads[100001];//��ͼ��ÿ���㴴�������Դ洢��
void insertedge(int start,int Des,int Value)//��������ߣ����ڸ���������ͼ����ÿ���߲�2��
{
    linknode p;
    p=(linknode)malloc(sizeof(linknode));
    p->des=Des;p->value=Value;
    p->next=heads[start]->next;
    heads[start]->next=p;
}
int findmin()//���ڶ�ת��ѡ�����ҳ�����Ǯ����ѡ��
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
        dis[p->des]=p->value;//��Դ����ڽӵ��ʼ��dis����
    dis[start]=0;sign[start]=1;//���ϱ��
    for(int i=1;i<vexnum;i++)
    {
        temp=findmin();//ÿ���ҳ�ʣǮ����ѡ����Ա��
        ans[temp]=dis[temp];
        sign[temp]=1;
        for(linknode p=heads[temp]->next;p!=NULL;p=p->next)
        {
            if(sign[p->des]==0&&dis[p->des]>dis[temp]+p->value)//ÿ����temp���ڽӵ����dis����
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



