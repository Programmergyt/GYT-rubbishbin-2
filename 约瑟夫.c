#include <stdio.h>
#define N 50

int main()
{
    int a[N], m, n, x, i, count = 0;

    printf("Please input n m:\n");
    scanf("%d %d", &n, &m);    /*  输入总人数n和出局要报的数m */

    x = n;     /* 把n赋给x，避免使用时n被修改 */

    for (i = 1; i <= n; i++) {
        a[i] = i;
    }

    do {
        for (i = 1; i <= n; i++) {
            /* 判断是否出局，已经出局的就不用报数了 */
            if (a[i] != 0) {
                count++;        /* 报数 */
            }

            if (count == m) {
                a[i] = 0;      /* 出局的人置为0，不参与报数 */
                count = 0;
                x--;           /* 出局一个，总人数减1 */
                printf("%d ", i);
            }
        }
    } while (x > 0);   /* 未淘汰完，循环继续 */

    return 0;
}
