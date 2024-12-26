// Keywords
// identifiers
// variables
// DataTypes

#include <stdio.h>

int main()
{

    // // int = 3;    // invalid identifier
    // int a = 3;             // valid identifier
    // int A = 30;            // valid identifier
    // int aA = 31;           // valid identifier
    // int hello = 300;       // valid identifier
    // int _HELL_Ohello_ = 2; // valid identifier
    // // int hel*lo = 300;     // invalid identifier

    // // int 1hello = 30;     // invalid identifier
    // int hell1222o = 300; // valid identifier
    // int _hello = 300;    // valid identifier
    // int h1_Aa_ = 300;    // valid identifier

    // // int a = 32; // error
    // a = 32;

    // datatypes in c

    int a = 3;        // 4 bytes
    long int a1 = 5;  // 4 bytes
    short int a6 = 3; // 2 bytes
    char a2 = 'c';
    double a3 = 2.3;         // 15 decimal places
    float a4 = 2.333;        // 6 decimal places
    long double a5 = 23.000; // 19 decimal places

    // signed or unsigned data type

    printf("size of a:%d\n", sizeof(a));
    printf("size of a1:%d\n", sizeof(a1));
    printf("size of a2:%d\n", sizeof(a2));
    printf("size of a3: %d\n", sizeof(a3));
    printf("size of a4:%d\n", sizeof(a4));
    printf("size of a5: %d\n", sizeof(a5));

    signed char c = 129; // -128 to 127
    printf("c:%d\n", c); // output: -3

    unsigned int d = 20;      // 0, 2^32-1
    signed int e = -30;       // -2^31 to 2^31-1
    unsigned long int f = 30; // 0, 2^8-1

    signed short int g = 222; // -2^15 to  2^15-1

    printf("d: %u\n", d);
    printf("e: %d\n", e);
    printf("f:%d\n", f);
    printf("g:%d\n", g);

    printf("identifiers in c language\n");
}