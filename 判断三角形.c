#include <stdio.h>
#include <math.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a+b>c&&a+c>b&&b+c>a)
      {
      if((c*c+b*b-a*a)<0||(a*a+b*b-c*c)<0||(a*a+c*c-b*b)<0)
      printf("Obtuse triangle\n");
      if((c*c+b*b-a*a)==0||(a*a+b*b-c*c)==0||(a*a+c*c-b*b)==0)
      printf("Right triangle\n");
      if((c*c+b*b-a*a)>0&&(a*a+b*b-c*c)>0&&(a*a+c*c-b*b)>0)
      printf("Acute triangle\n");
      if(a==b||b==c||a==c)
      printf("Isosceles triangle\n");
      if(a==b&&c==a&&b==c)
      printf("Equilateral triangle\n");
      }
   else
   {
    printf("Not triangle");
   }
}
