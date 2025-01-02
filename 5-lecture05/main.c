/*

Arithmetic Operators
- , + , * , / , %, --, ++,

Relational Operators
==, !=, > , < , >=, <=

Logical Operators
&&, || , !

Assignment Operators
 +=, =,*=, -=, /=, %=

& - address of operator, sizeof()

*/

#include <stdio.h>

int main()
{
    // int a = 11;
    // int b = 2;

    //! Arithmetic operators
    // int c = a + b;
    // int d = a - b;
    // int e = a * b;
    // int f = a / b; // 5.2=5+0.2;
    // int g = a % b; // output - 1

    // printf("c:%d,d:%d, e:%d, f:%d, g:%d \n", c, d, e, f, g);

    // int h = 3;
    // --h;                          // pre-decrement
    // printf("value of h:%d\n", h); // output - 2
    // h--;                          // post decrement
    // printf("value of h:%d\n", h);

    // int i = 10;
    // // printf("value of i:%d\n", i--);
    // // printf("value of i: %d\n", i);

    // printf("value of i:%d\n", --i);

    // int z = 20;
    // // z++;
    // // printf("value of z:%d\n", z);

    // // ++z;
    // // printf("value of z:%d\n", z);

    // printf("value of z:%d\n", z++); // output z=20;
    // printf("value of z:%d\n", z);   // output=21
    // printf("value of z:%d\n", ++z); // output=22
    // printf("value of z:%d\n", z);   // ouput=22

    //! Relational operators - 0 : false, 1:true

    // int a = 5;
    // int b = 5;
    // printf("value of a==b:%d\n", a == b); // output -0
    // printf("value of a!=b:%d\n", a != b); // output - 1
    // printf("value of a>b:%d\n", a > b);
    // printf("value of a<b:%d\n", a < b);
    // printf("value of a>=b:%d\n", a >= b);
    // printf("value of a<=b:%d\n", a <= b);

    //! comments

    // this is the single line comment

    /*
    ! this is the multiple line comment
    asdfajsd;f a
    asldkfjas; d
    asdlfkjas;d f
    asldkfja;sdf

    */

    /*

    true- 1
    false- 0

    todo: &&  - and operator
    1 && 0 = 0
    1&&1=1
    0&&0=0
    0&&1=0
    1&&0=0

    todo: || - or operator
    1||0=1
    0||1=1
    1||1=1
    0||0=0

    !0=1
    !1=0







    */

    // int a = 3;
    // int b = 5;

    // int c = (a < b) && (a != b);  // 1 && 1 = 1
    // printf("value of c:%d\n", c); // output- 1

    // int d = (a > b) || (a == b);   // ouput - 0 || 0=0
    // printf("value of d:%d\n ", d); // output - 0

    // int e = !(a < b); //(3>5) =!(1)
    // printf("value of e:%d\n", e);

    //! Assignment operator
    // int a = 3; // assignment operator =
    // a += 3;    // a+=3 a=a+3;
    // printf("value of a: %d\n", a);
    // a -= 3; // => a=a-3
    // printf("a:%d\n", a);
    // a *= 3;              // => a=a*3
    // printf("a:%d\n", a); // outptu - 9

    // a /= 3;              // => a=a/3;
    // printf("a:%d\n", a); // output - 3

    // a %= 3; // => a=a%3; = 3%3
    // printf("a:%d\n", a);

    // int h = 30;
    // printf("address of h: %p\n", &h);

    // operator precedence
    int a = 2 * 6 / 2 % 2; // 12/2=6%2=0
    printf("value of a:%d\n", a);

    int b = 2 * 6 / 3; // output= 4
    printf("value of b:%d\n", b);

    int c = 2 + 3 - 6 / 2 * 3 % 2; // output - 6/6=1%2=1 , 2+3-1=4

    printf("value of c: %d\n", c);
}
