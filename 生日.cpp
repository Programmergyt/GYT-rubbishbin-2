#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct student
    {
        string name;
        int length;
        int year;
        int month;
        int day;
        int number;
    };
int main()
{
    int n,i,j,length,k;
    char c,d;
    struct student stu[300];
    struct student temp;
    cin>>n;
    for(i=1;i<=n;i++)
        {
        stu[i].number=i;
        cin>>stu[i].name>>stu[i].year>>stu[i].month>>stu[i].day; //��������
        }
for(i=1;i<=n;i++)
     {
     k=i;
     for(j=i+1;j<=n;j++)
        if(stu[j].year<stu[k].year)
        k=j;
        temp=stu[k];stu[k]=stu[i],stu[i]=temp;     //��������
     }
for(i=1;i<=n;i++)
     {
     k=i;
     for(j=i+1;j<=n;j++)
        if(stu[j].year==stu[k].year&&stu[j].month<stu[k].month)    //��������
        k=j;
        temp=stu[k];stu[k]=stu[i],stu[i]=temp;
     }
for(i=1;i<=n;i++)
     {
     k=i;
     for(j=i+1;j<=n;j++)
        if(stu[j].year==stu[k].year&&stu[j].month==stu[k].month&&stu[j].day<stu[k].day) //��������
        k=j;
        temp=stu[k];stu[k]=stu[i],stu[i]=temp;
     }
for(i=1;i<=n;i++)
     {
     k=i;
     for(j=i+1;j<=n;j++)
        if(stu[j].year==stu[k].year&&stu[j].month==stu[k].month&&stu[j].day==stu[k].day&&stu[j].number<stu[k].number) //��ѧ������
        k=j;
        temp=stu[k];stu[k]=stu[i],stu[i]=temp;
     }
for(i=1;i<=n;i++)
   cout<<stu[i].name<<endl;   //�������
   return 0;
}
