#include<stdio.h>
int n;//数字个数
int a[1000005];
int m;
int b[100005];
int find(int a[],int key)
{
    int left=1,mid,right=n;
    while(left<=right)
    {
        if (left==right)
	    {
		if (a[left]==key)return left;
		else return -1;/*最后位置的数与待查询数不相等，说明数列里没有此数*/
	    }
        mid=(left+right)/2;
        //printf("%d %d %d\n",left,mid,right);
        if(a[mid]==key)return mid;
        else if(key<a[mid])right=mid-1;
        else left=mid+1;
    }
    return -1;
}
int main()
{
    int ans;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=m;i++)
        {
            if(find(a,b[i])!=-1)
            {
            for(ans=find(a,b[i]);a[ans-1]==b[i];ans--);
            printf("%d ",ans);
            }
            else
            printf("-1 ");
        }
    return 0;
}
