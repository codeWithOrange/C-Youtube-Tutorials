// Some questions on if else , switch and conditional operator

// question - 1: Write a program to calculate the grade of a student based on average marks using if-else conditions:
// question -2:Write a program to perform basic arithmetic operations (+, -, *, /) using a switch statement.
// question -3:check if number is even or odd

/*
! HOMEWORK
Write a program to determine the type of a triangle (equilateral, isosceles, or scalene) based on the lengths of its sides using nested if-else.


Write a program to find the roots of a quadratic equation. Use if-else to check for real roots, imaginary roots, or repeated roots. ax^2+bx+c;D=b^2-4ac
*/

#include <stdio.h>
int main()
{

    float physics, chemistry, maths;
    printf("Enter your marks in physics(100):");
    scanf("%f", &physics);
    printf("Enter your marks in chemistry(100):");
    scanf("%f", &chemistry);
    printf("Enter your marks in maths(100):");
    scanf("%f", &maths);

    float average = (physics + chemistry + maths) / 3;
    float minimum_marks = 40;
    printf("your average is:%f\n", average);
    if (average >= 0 && average <= 100)
    {
        if (average <= 40)
        {
            printf("you are fail\n");
        }
        else
        {
            printf("you are pass\n");
            if (average >= 90)
            {
                printf("your grade is A\n");
            }
            else if (average >= 70 && average < 90)
            {
                printf("your grade is B\n");
            }
            else
            {
                printf("your grade is C\n");
            }
        }
    }
    else
    {
        printf("your inputs are invalid ");
    }
}