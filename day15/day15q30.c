/* Q30: Reverse a number */
#include <stdio.h>
int main(void)
{
    int n, reverse = 0;
    scanf("%d", &n);
    int sign = n < 0 ? -1 : 1;
    n *= sign;
    do
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    } while (n);
    printf("%d", sign * reverse);
    return 0;
}
