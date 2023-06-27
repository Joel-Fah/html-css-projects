#include <stdio.h>

int main() {
    int i, size;
    float sum = 0.0, array[100];

    // Get input
    printf("Enter the size of the array: >>> ");
    scanf("%d", &size);

    // Get array elements from input:
    printf("\nEnter %d elements into your array:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Item %d >>> ", i+1);
        scanf("%f", &array[i]);
    }

    // Print array elements
    printf("\n\nYour array elements are as follows:\n");
    for (i = 0; i < size; i++)
    {
        printf("%0.1f \t", array[i]);
    }

    // Calculate sum of elements
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    
    // Print results
    printf("\n\nThe sum of elements in this array is >>> %0.1f\n\n", sum);

    return 0;
}