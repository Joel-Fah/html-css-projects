#include <stdio.h>

int main() {
    int i, j, size, minIndex;
    float temp, array[100];

    //  Get array size and elements
    printf("Enter the size of your array: >>> ");
    scanf("%d", &size);

    printf("\n\nEnter %d elements into your array:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Item %d >>> ", i+1);
        scanf("%f", &array[i]);
    }

    // Print array elements before sort
    printf("\n\nYour array elements BEFORE sorting are as follows:\n");
    for (i = 0; i < size; i++)
    {
        printf("%0.1f \t", array[i]);
    }
    
    // Sort array
    for (int i = 0; i < size - 1; ++i) {
        minIndex = i;
        
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap
        if (minIndex != i) {
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }

    // Print array elements after sort
    printf("\n\nYour array elements AFTER sorting are as follows:\n");
    for (i = 0; i < size; i++)
    {
        printf("%0.1f \t", array[i]);
    }

    printf("\n\n");
}