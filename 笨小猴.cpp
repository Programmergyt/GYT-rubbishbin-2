#include<bits/stdc++.h>
using namespace std;
int main()
{
  bool zhi(int k);
  char cha[100],c;
  int i=1,a[30],n=0,ma=0,mi=0,p,j;
  while((c=getchar())&&c!='\n')
  {
      cha[i]=c;
      i=i+1;
      n=n+1;
  }
  for(i=0;i<=26;i++)
    a[i]=0;
   for(i=1;i<=n;i++)
   {
    if(cha[i]=='a')
    a[1]=a[1]+1;
    if(cha[i]=='b')
    a[2]=a[2]+1;
    if(cha[i]=='c')
    a[3]=a[3]+1;
    if(cha[i]=='d')
    a[4]=a[4]+1;
    if(cha[i]=='e')
    a[5]=a[5]+1;
    if(cha[i]=='f')
    a[6]=a[6]+1;
    if(cha[i]=='g')
    a[7]=a[7]+1;
    if(cha[i]=='h')
    a[8]=a[8]+1;
    if(cha[i]=='i')
    a[9]=a[9]+1;
    if(cha[i]=='j')
    a[10]=a[10]+1;
    if(cha[i]=='k')
    a[11]=a[11]+1;
    if(cha[i]=='l')
    a[12]=a[12]+1;
    if(cha[i]=='m')
    a[13]=a[13]+1;
    if(cha[i]=='n')
    a[14]=a[14]+1;
    if(cha[i]=='o')
    a[15]=a[15]+1;
    if(cha[i]=='p')
    a[16]=a[16]+1;
    if(cha[i]=='q')
    a[17]=a[17]+1;
    if(cha[i]=='r')
    a[18]=a[18]+1;
    if(cha[i]=='s')
    a[19]=a[19]+1;
    if(cha[i]=='t')
    a[20]=a[20]+1;
    if(cha[i]=='u')
    a[21]=a[21]+1;
    if(cha[i]=='v')
    a[22]=a[22]+1;
    if(cha[i]=='w')
    a[23]=a[23]+1;
    if(cha[i]=='x')
    a[24]=a[24]+1;
    if(cha[i]=='y')
    a[25]=a[25]+1;
    if(cha[i]=='z')
    a[26]=a[26]+1;
    }
   ma=a[1];
   mi=1008;
   for(i=2;i<=26;i++)
       {
      if(a[i]>ma)
      ma=a[i];
       }
   for(i=1;i<=26;i++)
      {
        if(a[i]<mi&&a[i]>0)
        mi=a[i];
      }
      p=ma-mi;
      if(zhi(p))
     {
        printf("Lucky Word\n");
        printf("%d\n",p);
     }
   else
     {
        printf("No Answer\n");
        printf("0\n");
     }
}
bool zhi(int k)
{
    int i,t;
    if(k==0)
        return false;
    if(k==1)
        return false;
    if(k!=1&&k!=0)
         for(i=2;i*i<=k;i++)
        {
         if(k%i==0)
        {
         return false;
         break;
        }
        }
}
