#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
float T;
int n;
float value;
struct gold
{
    float m;
    float v;
}gold[105];
bool cmp(struct gold a,struct gold b)
{
    return a.v/a.m>b.v/b.m;
}
int main()
{
    cin>>n>>T;
    for(int i=0;i<n;i++)
        cin>>gold[i].m>>gold[i].v;
    sort(gold,gold+n,cmp);
    for(int i=0;i<n&&T>0;i++)
    {
        if(T>=gold[i].m)
        {
            T-=gold[i].m;
            value+=gold[i].v;
        }
        else
        {
            value+=gold[i].v*(T/gold[i].m);
            T=0;
        }
    }
    printf("%.2f",value);
    return 0;
}
