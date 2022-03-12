#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int k[4],bok[4][105],f[105][105][105];
int main() {
	for(int i=1; i<=3; ++i)
		scanf("%d",&k[i]);
	for(int i=1; i<=3; ++i)
		for(int j=1; j<=k[i]; ++j)
			scanf("%d",&bok[i][j]);
	for(int i=k[1]; i>=0; --i)
		for(int j=k[2]; j>=0; --j)
			for(int l=k[3]; l>=0; --l)
            {
				int t=k[1]+k[2]+k[3]-(i+j+l);
				f[i][j][l]=max(max(f[i+1][j][l]+bok[1][i+1]*t,f[i][j+1][l]+bok[2][j+1]*t),f[i][j][l+1]+bok[3][l+1]*t);
			}
	printf("%d",f[0][0][0]);
	return 0;
}
