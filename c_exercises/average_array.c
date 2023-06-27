#include <stdio.h>

// Function declaration
float sum_array(float array[], int size);

int main() {
    int i, size;
    float average, array[100];

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
        printf("%0.2f \t", array[i]);
    }
    
    // Evaluate average
    average = sum_array(array, size) / size;

    // Print result
    printf("\n\nThe average of the elements are >>> %0.2f\n", average);
}

float sum_array(float array[], int size) {
    int i;
    float sum = 0.0;

    for (i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    
    return sum;
}