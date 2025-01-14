#include <stdio.h>

int main()
{

    int a;

    printf("Enter a number:");
    scanf("%d", &a);
    a % 2 == 0 ? printf("%d is an even number", a) : printf("%d is odd number", a);

    return 0;
}