#include <stdio.h>
#define N 50

int main()
{
    int a[N], m, n, x, i, count = 0;

    printf("Please input n m:\n");
    scanf("%d %d", &n, &m);    /*  ����������n�ͳ���Ҫ������m */

    x = n;     /* ��n����x������ʹ��ʱn���޸� */

    for (i = 1; i <= n; i++) {
        a[i] = i;
    }

    do {
        for (i = 1; i <= n; i++) {
            /* �ж��Ƿ���֣��Ѿ����ֵľͲ��ñ����� */
            if (a[i] != 0) {
                count++;        /* ���� */
            }

            if (count == m) {
                a[i] = 0;      /* ���ֵ�����Ϊ0�������뱨�� */
                count = 0;
                x--;           /* ����һ������������1 */
                printf("%d ", i);
            }
        }
    } while (x > 0);   /* δ��̭�꣬ѭ������ */

    return 0;
}
