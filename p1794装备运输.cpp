#include<iostream>
using namespace std;
int  damage[501][501];//����ʣ��ĳһ���ĳһ����ʱ�Ļ���ֵ
int value[501];//������ֵ
int v[501];//�������
int w[501];//��������
int volume;//�����
int weight;//������
int n;//������
int  max(int a,int b)
{
    return a>b ? a:b;
}
void bagtable()//���䱳�������
{
    for(int i=1;i<=n;i++)//����ÿ������
        for(int j=volume;j>=v[i];j--)//���������ÿ�����
           for(int k=weight;k>=w[i];k--)//����������ÿ�����
    {
            damage[j][k]=max(damage[j-v[i]][k-w[i]]+value[i],damage[j][k]);
    }//�ӽ��뱳���벻����������ѡ����ѡ���ֵ�ߵ�һ��
}
int main()
{
   cin>>volume>>weight>>n;
   for(int i=1;i<=n;i++)
   cin>>value[i]>>v[i]>>w[i];
   bagtable();
   cout<<damage[volume][weight];
   return 0;
}
