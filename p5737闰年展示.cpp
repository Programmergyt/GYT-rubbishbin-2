#include<stdio.h>
int main()
{
    int count=0;
    int year[1000];
    int start,end;
    scanf("%d%d",&start,&end);
    for(int i=start;i<=end;i++)
    {
        if(i%4!=0)continue;
        else if(i%400==0){year[count]=i;count++;continue;}
        else if(i%100==0)continue;
        else year[count]=i;count++;
    }
    printf("%d\n",count);
    for(int i=0;i<count;i++)
        printf("%d ",year[i]);
    return 0;
}
