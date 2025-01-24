// break, continue, goto statement
#include <stdio.h>

int main()
{

    // ! break;

    // for (int i = 0; i < 10; i++)
    // {

    //     for (int b = 0; b < 5; b++)
    //     {
    //         printf("value of b:%d\n", b);
    //         if (b == 3)
    //         {
    //             break;
    //         }
    //     }
    //     // printf("value of i:%d\n", i);
    //     // if (i == 5)
    //     // {
    //     //     break;
    //     // }

    //     if (i == 9)
    //     {
    //         break;
    //     }
    // }

    // int count = 0;
    // while (count < 10)
    // {
    //     printf("value of count:%d\n", count);
    //     if (count == 5)
    //     {
    //         break;
    //     }
    //     count++;
    // }
    // printf("finished , after while loop");

    // int d = 0;
    // do
    // {

    //     printf("value of d:%d\n", d);
    //     if (d == 1)
    //     {
    //         break;
    //     }
    //     d++;
    // } while (d < 3);

    // printf("finished");

    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         continue;
    //     }
    //     printf("value of i:%d\n", i);
    // }

    // int i = 0;
    // while (i < 10)
    // {

    //     i++;
    //     if (i == 3)
    //     {
    //         continue;
    //     }
    //     printf("value of i:%d\n", i);
    // }

    // int i = 0;

    // do
    // {
    //     if (i == 5)
    //     {
    //         continue;
    //     }
    //     i++;
    // } while (i < 10);

    // label - valid identifier;

raj:
    printf("inside raj label\n");
    goto hello;
hello:
    printf("inside hello label\n");
    goto end;
    goto raj;

end:
    printf("inside end label\n");
    goto hello;

    return 0;
}