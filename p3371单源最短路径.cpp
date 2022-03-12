#include<stdio.h>
#define INF 2147483647
#define MAX 10000
int dist[10001];
int matrix[1001][1001];
int vexnum;
int edgenum;
int vs;//Դ��
int flag[MAX];
void dijkstra()
{
    int i,j,k;
    int min;
    int tmp;     // flag[i]=1��ʾ"����vs"��"����i"�����·���ѳɹ���ȡ��

    // ��ʼ��
    for (i = 0; i < vexnum; i++)
    {
        flag[i] = 0;              // ����i�����·����û��ȡ����             // ����i��ǰ������Ϊ0��
        dist[i] = matrix[vs][i];// ����i�����·��Ϊ"����vs"��"����i"��Ȩ��
    }

    // ��"����vs"������г�ʼ��
    flag[vs] = 1;
    dist[vs] = 0;

    // ����G.vexnum-1�Σ�ÿ���ҳ�һ����������·����
    for (i = 0; i < vexnum; i++)
    {
        // Ѱ�ҵ�ǰ��С��·����
        // ������δ��ȡ���·���Ķ����У��ҵ���vs����Ķ���(k)��
        min = INF;
        for (j = 0; j < vexnum; j++)
        {
            if (flag[j]==0 && dist[j]<min)
            {
                min = dist[j];
                k = j;
            }
        }
        // ���"����k"Ϊ�Ѿ���ȡ�����·��
        flag[k] = 1;

        // ������ǰ���·����ǰ������
        // �������Ѿ�"����k�����·��"֮�󣬸���"δ��ȡ���·���Ķ�������·����ǰ������"��
        for (j = 0; j < vexnum; j++)
        {
            tmp = (matrix[k][j]==INF ? INF : (min + matrix[k][j])); // ��ֹ���
            if (flag[j] == 0 && (tmp  < dist[j]) )
            {
                dist[j] = tmp;
            }
        }
    }
    // ��ӡdijkstra���·���Ľ��
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












