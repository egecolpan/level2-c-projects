#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    printf("Multiplication table for %d generated successfully.\n", number);


    return 0;
}
    
    