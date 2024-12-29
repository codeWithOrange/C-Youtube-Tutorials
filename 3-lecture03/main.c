// constants
// literals
// escape sequences

#include <stdio.h>

#define YOURNAME "sambhav" // valid constant variable, IMMUTABLE VARIABLE
typedef char *string;
int main()
{

    int a;  // declaraction
    a = 20; // mutable variable,initialization
    printf("a:%d\n", a);
    a = 30;
    printf("a: %d\n", a);

    const int b = 20;
    printf("b:%d\n", b);
    // b = 30;
    // printf("%d\n", b);

    const float pi = 3.14; // immutable variable
    const char name[] = "harsh";
    printf("value of pi: %f\n", pi);
    printf("value of name: %s\n", name);

    int c; // declaration
    printf("c before: %d\n", c);
    c = 20; // initialization
    printf("c after:%d\n", c);

    const int d = 30; // declaraction + initialization
    printf("yourname: %s\n", YOURNAME);

    //! LITERALS - textual represenataion of any value
    int h = 20u;
    float f = 30.0;
    float sc = 3E+5;   // 3*10^5
    float sc1 = 3E-5;  // 3*10^-5
    float sc2 = 10E-5; // 10*10^-5 = 10/1000000 = 0.0001
    float sc3 = 5E+5;  // 10*10^5=500000

    double sc4 = 100.00;

    long int li = 300l;
    long long int n = 300LLu;

    long int num1 = 3000ul;

    printf("value of n: %d\n", n);

    char g = 'g';
    string name1 = "raj";
    printf("name1:%s\n", name1);

    printf("value of sc:%f\n", sc);
    printf("value of sc1: %f\n", sc1);
    printf("value of sc2:%f\n", sc2);
    printf("value of sc3: %f\n  ", sc3);

    //! ESCAPE SEQUENCE
    // todo:  \'
    printf("'angad'\n"); // output -'angad', "angad"
    // todo:  \"
    printf("\"angad\"\n");
    //todo:  \\

    printf("\\hello\n"); // ouput:  \hello

    // todo: \?
    printf("hello\?\n");

    // todo: \n
    printf("hello\aworld\n");
    printf("hello\nworld\nhello\n");

    // todo: \t
    printf("hello\tworld");

    return 0;
}
