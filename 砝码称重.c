#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,i,j,sit[1001],a,s,d,z,x,c,temp,flag=0,total=0;
    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6);
    for(i=0;i<1001;i++)
        sit[i]=0;
        for(a=0;a<=a1;a++)
           {for(s=0;s<=a2;s++)
              {for(d=0;d<=a3;d++)
                 {for(z=0;z<=a4;z++)
                    {for(x=0;x<=a5;x++)
                       for(c=0;c<=a6;c++)
          {
           temp=a*1+s*2+d*3+z*5+x*10+c*20;
           if(sit[temp]==0&&temp!=0)
           {
            total=total+1;
            sit[temp]=1;
           }
          }}}}}
    printf("%Total=%d\n",total);
    return 0;
}
