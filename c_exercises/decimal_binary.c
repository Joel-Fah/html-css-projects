#include <stdio.h>

// Function declarations
void decimalToBinaryIterative(int decimal);
void decimalToBinaryRecursive(int decimal);

int main() {
    int decimal;
    
    printf("Enter a decimal number: >>> ");
    scanf("%d", &decimal);
    
    decimalToBinaryIterative(decimal);

    printf("\tRecursive Binary Number: >>> ");
    decimalToBinaryRecursive(decimal);
    
    return 0;
}

void decimalToBinaryRecursive(int decimal) {
    if (decimal > 0) {
        decimalToBinaryRecursive(decimal / 2);
        printf("%d", decimal % 2);
    }
}

void decimalToBinaryIterative(int decimal) {
    int binary[32];
    int index = 0;
    
    if (decimal == 0) {
        printf("\n\tIterative Binary Number: >>> 0\n");
        return;
    }
    
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    
    printf("\n\tIterative Binary Number: >>> ");
    
    for (int i = index - 1; i >= 0; --i) {
        printf("%d", binary[i]);
    }
    
    printf("\n");
}