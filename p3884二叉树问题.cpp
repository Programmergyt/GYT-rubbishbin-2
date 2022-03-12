#include<stdio.h>
int mat[105][105];//�ڽӾ������µı�ȨֵΪ1�����ϵı�ȨֵΪ2
int width[100];//��¼ÿһ��ڵ����
int sign[105];//��¼ÿ���ڵ���û�б����ʹ�
int depth;//��¼���
int dis;//��¼����֮�����
int n;//��¼�ڵ����
int from,to;//��¼������յ�
void dfstree(int v,int step)//���ڼ��������������
{
    width[step]++;//���ò�Ŀ��+1
    if(step>depth)
        depth=step;//�������
    for(int i=1;i<=n;i++)
        if(mat[v][i]==1)//ȷ����������������Ϊ���µı�Ȩֵ��Ϊ1
        dfstree(i,step+1);
}
int findmax()//�����ҵ�����һ��Ľڵ���
{
    int ans=0;
    for(int i=0;i<100;i++)
        if(width[i]>ans)
        ans=width[i];
    return ans;
}
void dfsdis(int v,int distance)//�����ҵ�������յ�֮���·��������·������
{//v����ǰ���ĸ��ڵ㣬distance��ʾ�Ѿ����˶��پ���
    if(v==to)
    {
        dis=distance;//������˾�ֱ�Ӹ��¾��벢����
        return ;
    }
    sign[v]=1;//��ǣ���ֹ���ߣ��������ǲ����߻�ͷ·������֮�����ٻ���
    for(int i=1;i<=n;i++)
        if(mat[v][i]!=0&&sign[i]==0)
            dfsdis(i,distance+mat[v][i]);//������
}
int main()
{
    int a,b;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d%d",&a,&b);
        mat[a][b]=1;mat[b][a]=2;//�ڽӾ������µı�ȨֵΪ1�����ϵı�ȨֵΪ2
    }
    scanf("%d%d",&from,&to);
    dfstree(1,1);//�Ӹ��ڵ㿪ʼ�����������
    dfsdis(from,0);//����������յ��ľ���
    printf("%d\n%d\n%d",depth,findmax(),dis);
    return 0;
}





