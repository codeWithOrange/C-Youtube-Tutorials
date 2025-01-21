/*
! Control flow statements
- for loop , while loop, do while loop
*/

#include <stdio.h>

int main()
{
    int b;     // declaration
    int a = 3; // initialization + declaration
               // ! for loop
               // for (int b = 0, c = 3, d = 5; b < 10 && c > 0; b += 3, d += 3, c -= 1)
               // {
               //     printf("b:%d,c:%d hello world\n", b, c);
               //     printf("value of d:%d\n", d);
               // }

    // ! nested for loop
    // for (int a = 0; a < 6; a++)
    // {
    //     for (int b = 0; b < 5; b++)
    //     {
    //         printf("a,b: %d,%d\n", a, b);
    //     }
    // }

    // ! while looop

    // b = 0;
    // while (a < 10)
    // {

    //     while (b < 6)
    //     {
    //         printf("value of b:%d\n", b);
    //         b++;
    //     }
    //     printf("hello world\n");
    //     a++;
    // }

    //! do while loop

    // do
    // {
    //     printf("a:%d,hello world\n", a);
    //     a++;
    // } while (a < 10);

    // multiplication table;, factorial,

    // for (;;) // infinite loop
    // {
    //     printf("hello world");
    // }

    printf("Enter the a number to print multiplication table:");
    int c;
    scanf("%d", &c);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dX%d:%d\n", c, i, c * i);
    }

    // factorial 5- 5*4*3*2*1
    int d;
    printf("Enter the number to find the factorial:");
    scanf("%d", &d);
    int result = 1;
    for (int i = 1; i <= d; i++)
    {
        result *= i; // result=result*i= 1*1*2*3*4*5=120
    }

    printf("factorial of %d is %d\n", d, result);
    printf("finished");
}