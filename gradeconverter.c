#include <stdio.h>
#include <stdlib.h>

int main()

{
    int grade;
    printf("Enter your grade between 0 - 100: ");
    scanf("%d", &grade);

    int letter_grade;

    if (grade >= 90 )
    {
        printf("A+\n");
    }
    else if (grade >= 85)
    { 
        printf("A\n");
    }
    else if (grade >= 80)
    {
        printf("A-\n");
    }
    else if (grade >= 75)
    {
        printf("B+\n");
    }
    else if (grade >= 70)
    {
        printf("B\n");
    }
    else if (grade >= 65)
    {
        printf("C+\n");
    }
    else if (grade >= 60)
    {
        printf("C\n");
    }
    else if (grade >= 55)
    {
        printf("D+\n");
    }
    else if (grade >= 50)
    {
        printf("D\n");
    }
    else if (grade >= 40)
    {
        printf("E\n");
    }
    else if (grade <= 39)
    {
        printf("F\n");
    } 
}