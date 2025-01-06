// binary to decimal conversion and decimal to binary conversion

// bitwise operators - & , | , ^ , ~, >> , << operator, a>>b = a/2^b, a<<b= a*2^b
// assignment operator related to bitwise operator
#include <stdio.h>

int main()
{
    printf("%d\n", 9 & 10);
    printf("%d\n", 14 & 17);
    printf("%d\n", 9 | 10);
    printf("%d\n", 17 | 18);
    printf("%d\n", 6 ^ 12);
    printf("%d\n", 11 ^ 13);
    printf("%d\n", 15 ^ 16);

    printf("%d\n", ~9);
    printf("%d\n", ~6);
    printf("%d\n", 9 >> 1);
    printf("%d\n", 8 >> 2);
    printf("%d\n", 14 >> 3);
    printf("%d\n", 8 << 3);
    printf("%d\n", 18 << 1);
    printf("%d\n", 18 >> 1);
    printf("%d\n", 18 >> 2);
    printf("%d\n", 9 << 1);

    int a = 5;
    int b = 6;
    a &= 3; // a=a&3;a=5&3;

    a ^= 3; // a=a^3;
    a |= 3; // a=a|3;

    printf("a:%d\n", a);

    b >>= 3; // b=b>>3; 6>>3
    b <<= 3; // b=b<<3;6<<3;
}