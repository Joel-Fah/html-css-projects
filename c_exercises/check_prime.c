#include <stdio.h>

int main() {
    unsigned int number, i;
    int isPrime = 1; // Assume the number is prime
    
    // Get input and make sure it's positive integer
    do {
        printf("Enter a positive integer >>> ");
        scanf("%d", &number);
        
        if (number <= 0) {
            printf("Invalid input. Please enter a positive integer.\n\n");
        }
    } while (number <= 0);
    
    // Check if prime
    if (number == 1) {
        isPrime = 0;  // 1 is not prime
    } else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;  // Not prime if the number is divisible by i
                break;
            }
        }
    }
    
    // Print result.
    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}
