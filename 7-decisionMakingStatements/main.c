
// Decision making statements

// if else
// nested if else
// switch case statements
// nested switch case statements
// short if else ?:

#include <stdio.h>

int main()
{

    // ! if else statement
    // int a = 2;

    // printf("a==20:%d\n", a == 20);
    // if (a == 20)
    // {
    //     printf("a is 20");
    // }
    // else
    // {
    //     printf("else block\n");
    // }
    // printf("finished");

    // if (a == 20)
    // {
    //     printf("a is 20");
    // }
    // else if (a != 2)
    // {
    //     printf("hello world\n");
    //     printf("a is not 2\n");
    // }
    // else if (a == 4)
    // {
    //     printf("a is 4");
    // }

    // int c = 2;

    // printf("finished");

    //  ! nested if else
    // int a = 20;
    // int b = 3;

    // if (a == 20)
    // {
    //     if (b == 3)
    //     {
    //         printf("a is 20 and b is 3\n");
    //     }
    //     printf("a is 20\n");
    // }
    // else
    // {
    //     printf("else block\n");
    //     if (b == 3)
    //     {
    //         printf("b is 3\n");
    //     }
    // }

    // if (a == 20 && b == 3)
    // {
    //     printf("a is 20 and b is 3\n");
    // }

    //! switch case

    // int day = 2; // sunday
    // int a = 5;
    // switch (day)
    // {
    // case 1:
    //     printf("today is sunday\n");
    //     break;
    // case 2:
    //     printf("today is monday\n");
    //     break;
    // case 3:
    //     printf("today is tuesday\n");
    //     break;
    // case 4:
    //     printf("today is wednesday\n");

    // default:
    //     break;
    // }

    // ! nested switch case

    // char b = 'a';
    // char c = 'c';
    // switch (b)
    // {
    // case 'a':

    //     printf("value is a\n");
    //     printf("hello world\n");
    //     switch (c)
    //     {
    //     case 'c':
    //         printf("value is c\n");
    //         break;

    //     default:
    //         printf("this is the default case\n ");
    //         break;
    //     }
    //     break;

    // case 'b':
    // {

    //     printf("value is b\n");
    //     printf("hello worldd");
    //     printf("aslkdjfa;sld f");
    // }
    // break;

    // case 'c':
    //     printf("value is c\n");
    //     break;

    // default:
    //     printf("this is the default case\n");
    //     break;
    // }

    // ! short if else

    // int a = 16;
    // a == 20 ? printf("value is 20\n") : printf("value is not 20\n"); // short if else,conditional operator ?:
    // int b = a == 20 ? 20 : 29;
    // printf("value of b:%d\n", b);

    int d = 20;
    switch ((d % 2) + 1)
    {
    case 1:
        printf("remainder is 1\n");
        break;
    case 5:
        printf("remained is 5\n");
    case 0:
        printf("remainder is 0\n");
        break;
    default:
        printf("this is  the default case\n");
        break;
    }
    printf("finished");
    return 0;
}