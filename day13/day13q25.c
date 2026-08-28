/* Q25: Basic calculator using switch-case */
#include <stdio.h>
int main(void)
{
    double a, b;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op)
    {
    case '+':
        printf("%.2f", a + b);
        break;
    case '-':
        printf("%.2f", a - b);
        break;
    case '*':
        printf("%.2f", a * b);
        break;
    case '/':
        if (b == 0)
            printf("Division by zero");
        else
            printf("%.2f", a / b);
        break;
    case '%': {
        int x = (int)a, y = (int)b;
        if (y == 0)
            printf("Division by zero");
        else
            printf("%d", x % y);
        break;
    }
    default:
        printf("Invalid operator");
    }
    return 0;
}
