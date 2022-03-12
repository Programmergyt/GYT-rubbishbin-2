#include <stdio.h>
#include <algorithm>
#define N 310
using namespace std;
struct stud
{
    int num;
    int score[3];
    int total;
};
int main()
{
   int n,i,j,k;
   struct stud stu[N],*p=stu;
   struct stud temp;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    {
    scanf("%d%d%d",&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
    stu[i].total=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
    }
  for(i=1;i<=n;i++)
    stu[i].num=i;
  for(i=1;i<=n;i++)
  {
      k=i;
      for(j=i+1;j<n+1;j++)
        if(stu[j].total>stu[k].total)
        k=j;
      temp=stu[k];stu[k]=stu[i],stu[i]=temp; //kÓëiÍ¬Ñ§»¥»»
  }
  for(i=1;i<=5;i++)
    if(stu[i].total==stu[i+1].total)
      {
      if(stu[i].score[0]<stu[i+1].score[0])
        {
        temp=stu[i];stu[i]=stu[i+1],stu[i+1]=temp;
        }
      else if(stu[i].score[0]==stu[i+1].score[0])
        {
        if(stu[i].num>stu[i+1].num)
        temp=stu[i];stu[i]=stu[i+1],stu[i+1]=temp;
        }
      }
  for(i=1;i<=5;i++)
   {
   printf("%d %d",stu[i].num,stu[i].total);
   printf("\n");
   }
   return 0;
  }









