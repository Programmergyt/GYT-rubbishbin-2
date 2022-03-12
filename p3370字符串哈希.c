#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000][1600],temp[1600];
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-i;j++)
        if(strcmp(s[j],s[j+1])>0)
    {
        strcpy(temp,s[j]);
        strcpy(s[j],s[j+1]);
        strcpy(s[j+1],temp);
    }
    for(i=0;i<n;i++)
        if(strcmp(s[i],s[i+1]))
        count++;
    printf("%d",count);
}
