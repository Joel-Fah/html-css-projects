#include <stdio.h>

// Function declarations
int factorial_iterative(int number);
int factorial_recursive(int number);

int main() {
    int number;
    
    // Get input and make sure it's positive integer
    do {
        printf("Enter a positive integer >>> ");
        scanf("%d", &number);
        
        if (number <= 0) {
            printf("Invalid input. Please enter a positive integer.\n\n");
        }
    } while (number <= 0);

    // Evaluate different factorials
    // And display results...
    printf("\nThe iterative factorial is >>> %d", factorial_iterative(number));
    printf("\nThe recursive factorial is >>> %d", factorial_recursive(number));
}

int factorial_iterative(int number) {
    int i, result = 1;

    for (i = 1; i <= number; i++)
    {
        result = result * i;
    }

    return result;
}

int factorial_recursive(int number) {
    if (number == 0)
        return 1;
    return (number * factorial_recursive(number - 1));
}