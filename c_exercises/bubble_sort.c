#include <stdio.h>

int main()
{
    int i, j, size;
    float temp, array[100];

    //  Get array size and elements
    printf("Enter the size of your array: >>> ");
    scanf("%d", &size);

    printf("\n\nEnter %d elements into your array:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Item %d >>> ", i + 1);
        scanf("%f", &array[i]);
    }

    // Print array elements before sort
    printf("\n\nYour array elements BEFORE sorting are as follows:\n");
    for (i = 0; i < size; i++)
    {
        printf("%0.1f \t", array[i]);
    }

    // Sorting logic
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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