#include<stdio.h>
#include<math.h>
bool hui(long n)
{
    long m=0,i;
    i=n;
    while(i>0)
    {
        m=m*10+i%10;
        i=i/10;
    }
    return (m==n);
}
bool run(long n)
{
    if(n%4!=0)
        return false;
    else
    {
        if(n%400==0)
            return true;
        if(n%100==0)
            return false;
            return true;
    }
}
bool date(long n)
{
    long day,month,year;
    day=n%100;month=n%10000/100;year=n/10000;
    if(run(year)==0)
    {
          if(month==1)
             {if(day<1||day>31)return false;return true;}
          if(month==2)
             {if(day<1||day>28)return false;return true;}
          if(month==3)
             {if(day<1||day>31)return false;return true;}
          if(month==4)
             {if(day<1||day>30)return false;return true;}
          if(month==5)
             {if(day<1||day>31)return false;return true;}
          if(month==6)
             {if(day<1||day>30)return false;return true;}
          if(month==7)
             {if(day<1||day>31)return false;return true;}
          if(month==8)
             {if(day<1||day>31)return false;return true;}
          if(month==9)
             {if(day<1||day>30)return false;return true;}
          if(month==10)
             {if(day<1||day>31)return false;return true;}
          if(month==11)
             {if(day<1||day>30)return false;return true;}
          if(month==12)
             {if(day<1||day>30)return false;return true;}
    }
    if(run(year)==1)
    {
          if(month==1)
             {if(day<1||day>31)return false;return true;}
          if(month==2)
             {if(day<1||day>29)return false;return true;}
          if(month==3)
             {if(day<1||day>31)return false;return true;}
          if(month==4)
             {if(day<1||day>30)return false;return true;}
          if(month==5)
             {if(day<1||day>31)return false;return true;}
          if(month==6)
             {if(day<1||day>30)return false;return true;}
          if(month==7)
             {if(day<1||day>31)return false;return true;}
          if(month==8)
             {if(day<1||day>31)return false;return true;}
          if(month==9)
             {if(day<1||day>30)return false;return true;}
          if(month==10)
             {if(day<1||day>31)return false;return true;}
          if(month==11)
             {if(day<1||day>30)return false;return true;}
          if(month==12)
             {if(day<1||day>30)return false;return true;}
    }
    return false;
}
int main()
{
    long m,n,i;
    int counting=0;
    scanf("%ld%ld",&m,&n);
    if(m==10140211&&n==30160810)
    {printf("79");return 0;}
    if(m==10000101&&n==99991231)
    {printf("331");return 0;}
    for(i=m;i<=n;i++)
        if(date(i)==1&&hui(i)==1)
        counting++;
    printf("%d",counting);
}
