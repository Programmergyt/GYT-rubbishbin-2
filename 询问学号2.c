#include <stdio.h>
 #define N 2000010
 int a[N];
 int main() {
 int n, m, i, x;
 scanf("%d%d", &n, &m);
 for(i = 1; i <= n; i++) {
 scanf("%d", &a[i]);
 }
 while(m--) {
 scanf("%d", &x);
 printf("%d\n", a[x]);
 }
 return 0;
 }
