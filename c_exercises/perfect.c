#include <stdio.h>

int isPerfect(int num);

int main() {
    int num;
    
    // Get input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}

int isPerfect(int num) {
    int i, sum = 0;
    
    for (i = 1; i < num; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}