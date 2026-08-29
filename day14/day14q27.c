/* Q27: Sum of first n odd numbers */
#include <stdio.h>
int main(void)
{
    int n;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += 2 * i - 1;
    printf("%lld", sum);
    return 0;
}
