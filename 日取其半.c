#include <stdio.h>
#include <math.h>
int main()
{
float a;
int b,i;
i=1;
printf("请输入a的值为：");
scanf("%f",&a);
while((int)(a)>1)
     {
     a=(int)(a/2);
     i=i+1;
     }
printf("第%d天变为1",i);
return 0;
}
