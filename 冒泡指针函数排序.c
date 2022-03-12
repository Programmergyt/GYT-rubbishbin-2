#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void sort(int *a,int n)
{
  int i,j,temp;
  for (i=0;i<n;i++)
    {
       for(j=0;j<n-i;j++)
        if(*(a+j)<*(a+j+1))
       {temp=*(a+j+1);*(a+j+1)=*(a+j);*(a+j)=temp;}
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int a[50],i,j,temp,*p=a;
    for(i=0;i<50;i++)
    a[i]=rand()%(101);
    for(i=0;i<50;i++,p++)
    printf("%d ",*p);
    p=a;
    sort(p,50);
    p=a;
    for(i=0;i<50;i++,p++)
    printf("%d\n",*p);
}
