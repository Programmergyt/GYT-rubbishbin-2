#include<stdio.h>
#define N 1000001
int n;
int r;
unsigned short  a[N];//��¼ÿ�����Ƿ�������������Ϊ0����Ϊ1
int b[N];//��¼��1��n�ж��ٸ�����
void Prime()
{
    int i,j;
    a[1]=1;
    for(i=2;i<N;i++)
      if(a[i]==0)
        for(j=i+i;j<N;j+=i)
        a[j]=1;
}
void Count()
{
    for(int i=1;i<N;i++)
    {
        if(a[i]==0)
            b[i]=b[i-1]+1;
        else
            b[i]=b[i-1];
    }
}
int main()
{
    int p,q;
    scanf("%d%d",&n,&r);
    Prime();
    Count();
    for(int i=0;i<n;i++)
        {
            scanf("%d%d",&p,&q);
            if(q>r||p<1)
              printf("Crossing the line\n");
            else
              printf("%d\n",b[q]-b[p-1]);
        }
    return 0;
}
