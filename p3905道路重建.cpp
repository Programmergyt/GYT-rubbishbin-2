#include<iostream>
#define INF 2000000000
using namespace std;
int mat[105][105];//�����鼯�ı߳�
int mat1[105][105];//ԭ�߳�
int vexnum,ednum,damnum;
int stpoint,edpoint;
int sign[105];
int dis[105];
int ans[105];
int  dijstra()
{
    sign[stpoint]=1;
    for(int i=1;i<=vexnum;i++)
        dis[i]=mat[stpoint][i];
    for(int i=1;i<vexnum;i++)
    {
        int Min=INF,temp;
        for(int i=1;i<=vexnum;i++)
            if(sign[i]==0&&dis[i]<Min)
            {
                Min=dis[i];
                temp=i;
            }
        sign[temp]=1;
        ans[temp]=Min;
        if(temp==edpoint)return ans[temp];
        for(int i=1;i<=vexnum;i++)
            if(dis[i]>mat[temp][i]+dis[temp])
        {
            dis[i]=mat[temp][i]+dis[temp];
        }
    }
}
int main()
{
    cin>>vexnum>>ednum;
    for(int i=1;i<=vexnum;i++)
        for(int j=1;j<=vexnum;j++)
        mat[i][j]=INF;
    for(int i=1;i<=ednum;i++)
    {
        int temp1,temp2,temp3;
        cin>>temp1>>temp2>>temp3;
        mat[temp1][temp2]=mat[temp2][temp1]=0;//���е�·�����ı�Ȩֵ��Ϊ0����ʾ�˴��������û���
        mat1[temp1][temp2]=mat1[temp2][temp1]=temp3;
    }
    cin>>damnum;
    for(int i=0;i<damnum;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        mat[temp1][temp2]=mat1[temp1][temp2];
        mat[temp2][temp1]=mat1[temp2][temp1];
    }
    cin>>stpoint>>edpoint;
    cout<<dijstra();
    return 0;
}
