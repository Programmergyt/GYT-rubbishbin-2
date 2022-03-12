#include<stdio.h>
float a,b,c,d;
float func(float e)
{
    float r;
    r=a*e*e*e+b*e*e+c*e+d;    //代入求函数值
    return r;
}
int main()
{
    float mid,left,right,x,y,z,m;
    float i;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    for(i=0;i<200;i++)
    {
    z=func(i-100);    //从-100到100求出每个整数点的函数值
    m=func(i+1-100);
    if(z==0)
    printf("%.2f ",i-100);
    if(z*m<0)
      {
       left=i-100;right=i+1-100;mid=i+0.5-100;  //先给定二分法刚开始时左端点，中点，右端点的值
       while(fabs(left-right)>=0.00001)
               {
            if(func(left)*func(mid)<0)   //如果左边端点和中点异号，则将中点赋值给右边端点
            right=mid;
            else                      //如果右边边端点和中点异号，则将中点赋值给左边端点
            left=mid;
            mid=(right+left)/2;
               }
       printf("%.2f ",left);
      }
    }
    return 0;
}
