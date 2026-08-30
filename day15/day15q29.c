/* Q29: Factorial of a number */
#include <stdio.h>
int main(void)
{
    int n;
    long long f = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
        f *= i;
    printf("%lld", f);
    return 0;
}
