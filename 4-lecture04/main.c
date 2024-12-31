// format specifiers
// how to take user input

#include <stdio.h>

int main()
{

    // ! format specifiers

    // int a = 5;

    // printf("%d\n", a);

    // short int b = 3;
    // printf("%hi\n", b);

    // unsigned short int c = 333;
    // printf("%hu\n", c);

    // float d = 3.3;
    // printf("%e\n", d);

    // char e = 'g'; // 1 byte = 8 bits , unsigned - 0, 2^8-1, signed -128 to 127 =-2^7 to 2^7-1

    // printf("%c\n", e);
    // printf("%d\n", e);

    // int num1 = 20;
    // char n = 'a';
    // float num2 = 30.33;
    // double num3 = 30.3333;

    // printf("num1: %d, n: %c, num2:%f, num3: %f", num1, n, num2, num3);

    //! user input - scanf(),getchar(), gets()

    // int a;
    // printf("Enter value of a:");
    // scanf("%d", &a);
    // printf("value of a: %d\n", a);

    // char b;
    // printf("enter a char: ");
    // scanf("%c", &b);
    // printf("value of b: %c", b);

    // short int c;
    // scanf("%hi", &c);
    // printf("value of c: %hi", c);

    // char g;
    // printf("enter a character: ");
    // g = getchar();
    // printf("value of g:%c", g);

    // char name[20];
    // scanf("%s", &name);
    // printf("value of name:%s\n", name);

    char name1[20];
    gets(name1);
    printf("value of name1: %s\n", name1);

    int a;
    scanf("%d", a);
    printf("value of a: %d", a);
}