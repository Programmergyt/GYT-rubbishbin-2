#include<stdio.h>
#include<math.h>
int main()
{
  long a[100];
  int b[100];
  int n,i,j;
   scanf("%d",&n);
  for(i=0;i<n;i++)
   scanf("%ld",&a[i]);
  for(i=0;i<n;i++)
   {
   if(zhi(a[i])==1)
   {
    printf("%ld",a[i]);
    printf(" ");
   }
   }
return 0;
}

int zhi(long num)
{
    int i,y;
    y=1;
for(int i=2;i<num;i++)
        {
        if(num%i==0)
        {
            y=0;
            break;
        }
        }
if(num==1)
y=0;
        return(y);
}
