#include<stdio.h>
float a,b,c,d;
float func(float e)
{
    float r;
    r=a*e*e*e+b*e*e+c*e+d;    //��������ֵ
    return r;
}
int main()
{
    float mid,left,right,x,y,z,m;
    float i;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    for(i=0;i<200;i++)
    {
    z=func(i-100);    //��-100��100���ÿ��������ĺ���ֵ
    m=func(i+1-100);
    if(z==0)
    printf("%.2f ",i-100);
    if(z*m<0)
      {
       left=i-100;right=i+1-100;mid=i+0.5-100;  //�ȸ������ַ��տ�ʼʱ��˵㣬�е㣬�Ҷ˵��ֵ
       while(fabs(left-right)>=0.00001)
               {
            if(func(left)*func(mid)<0)   //�����߶˵���е���ţ����е㸳ֵ���ұ߶˵�
            right=mid;
            else                      //����ұ߱߶˵���е���ţ����е㸳ֵ����߶˵�
            left=mid;
            mid=(right+left)/2;
               }
       printf("%.2f ",left);
      }
    }
    return 0;
}
