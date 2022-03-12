#include<iostream>
using namespace std;
int  damage[501][501];//代表剩余某一体积某一质量时的火力值
int value[501];//单个价值
int v[501];//单个体积
int w[501];//单个重量
int volume;//总体积
int weight;//总重量
int n;//总数量
int  max(int a,int b)
{
    return a>b ? a:b;
}
void bagtable()//经典背包表递推
{
    for(int i=1;i<=n;i++)//遍历每个物体
        for(int j=volume;j>=v[i];j--)//遍历体积的每种情况
           for(int k=weight;k>=w[i];k--)//遍历重量的每种情况
    {
            damage[j][k]=max(damage[j-v[i]][k-w[i]]+value[i],damage[j][k]);
    }//从进入背包与不进背包两种选择中选择价值高的一种
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
