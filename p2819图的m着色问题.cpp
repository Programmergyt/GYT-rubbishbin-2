#include<stdio.h>
int mat[105][105];//�ڽӾ���
int sign[105];//��ɫ��ǣ�0������ɫ��1-Cnumÿ��������һ����ɫ
int Enum;//����
int Vnum;//������
int Cnum;//��ɫ��
int ans;//��
int canDraw(int n,int color)//�ж��±�Ϊn�ĵ��ܷ�Ϳcolor��ɫ
{
    if(sign[n]!=0)return 0;//���Ϳ��ɫ�Ͳ���Ϳ
    for(int i=0;i<Vnum;i++)
        if(mat[i][n]==1)//����б������ұߵ���һ�˵���ɫ��color���
        {
            if(sign[i]!=0&&sign[i]==color)
                return 0;
        }
    return 1;
}
void dfs(int n,int color)//���±�Ϊn�Ķ���Ϳcolor��ɫ��Ҫȷ���õ��ǿ���ͿĨ����ɫ��
{
    if(n==Vnum-1)//������һ�����㶼��ɫ��Ϳ
    {
        ans++;//��+1
        return ;
    }
    sign[n]=color;//Ϳɫ
    for(int j=1;j<=Cnum;j++)
      if(canDraw(n+1,j))//ȷ���������ĵ㶼�ǿ���ͿĨ��ɫ��
       dfs(n+1,j);//���±�˳��ÿ���������±�+1�Ķ���
    sign[n]=0;//������֮�����
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
    for(int i=1;i<=Cnum;i++)//ͳ��ÿ�ֳ�ʼ����ķ������ܺ�
       dfs(0,i);//��ÿ����ɫ����0�Ŷ���Ĩһ��
    printf("%d",ans);
    return 0;
}







