#include <stdio.h>
#include <math.h>
int main()
{
float a;
int b,i;
i=1;
printf("������a��ֵΪ��");
scanf("%f",&a);
while((int)(a)>1)
     {
     a=(int)(a/2);
     i=i+1;
     }
printf("��%d���Ϊ1",i);
return 0;
}
