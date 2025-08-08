#include<stdio.h>

int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second number: ");
    scanf("%d", &b);

    printf("operators are '+', '-', '*', '/'\n");
    char c;
    printf("enter an operator: ");
    scanf(" %c", &c);

    switch (c)
    {
        case '+':
            printf("a + b = %d\n", a+b);
            break;
        case '-':
            printf("a - b = %d\n", a-b);
            break;
        case '*':
            printf("a * b = %d\n", a*b);
            break;
        case '/':
            printf("a / b = %d\n", a/b);
            break;
        default:
            printf("invalid operator");
    }
    return 0;
}
