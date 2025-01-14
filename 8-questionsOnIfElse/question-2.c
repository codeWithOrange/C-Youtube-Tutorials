#include <stdio.h>

int main()
{
    float a, b;
    char c;
    printf("Enter a number:");
    scanf("%f", &a);
    printf("Enter another number:");
    scanf("%f", &b);
    printf("Enter a character(+,-,*,/)");
    scanf(" %c", &c);

    float result = 0.0;
    switch (c)
    {
    case '+':
        result = a + b;

        break;
    case '-':
        result = a > b ? a - b : b - a;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("your input character is not valid\n");
        break;
    }

    printf("result is:%f", result);

    return 0;
}