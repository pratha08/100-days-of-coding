/* Q26: Print numbers from 1 to n */
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d%c", i, i == n ? '\n' : ' ');
    return 0;
}
