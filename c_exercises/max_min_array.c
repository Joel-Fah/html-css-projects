#include <stdio.h>

int main() {
    int i, size;
    float max, min, array[100];

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

    // Get max and min of this array
    min = array[0];
    max = array[0];

    for (i = 0; i < size; i++)
    {
        if(array[i] < min) {
            min = array[i];
        }

        if(array[i] > max) {
            max = array[i];
        }
    }

    // Print results:
    printf("\n\nThe min and max values of your array are:\n\tmin >>> %0.1f\n\tmax >>> %0.1f\n\n", min, max);
    
}