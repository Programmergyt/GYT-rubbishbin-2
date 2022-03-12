#include <stdio.h>
#include <math.h>
int main()
{
   int x,y;
   printf("请输入两个整数x和y表示坐标");
   scanf("%d%d",&x,&y);
   if(x<=1&&y<=1&&x>=-1&&y>=-1)
   printf("yes");
   else
   printf("no");
   return 0;
}
