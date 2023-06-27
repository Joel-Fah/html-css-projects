#include <stdio.h>

int main() {
    int terms;
    
    // Get number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    
    // Print results
    fibonacci_iterative(terms);

    printf("\n\nRecursive version of Fibonacci Series up to term %d:\n", terms);
    for (int i = 0; i < terms; ++i) {
        printf("%d, ", fibonacci_recursive(i));
    }

    printf("\n\n");
    
    return 0;
}


void fibonacci_iterative(int n) {
    int term1 = 0, term2 = 1, nextTerm;
    
    printf("Iterative version Fibonacci Series up to term %d:\n", n);
    
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", term1);
        
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }
}

int fibonacci_recursive(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}