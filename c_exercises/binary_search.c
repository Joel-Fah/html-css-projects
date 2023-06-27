#include <stdio.h>

// Function declaration
void sort_array(float array[], int size);

int main() {
    int i, size, min, max, mid, pos = -1;
    float search_val, array[100];

    //  Get array size and elements
    printf("Enter the size of your array: >>> ");
    scanf("%d", &size);

    printf("\n\nEnter %d elements into your array:\n", size);
    for (i = 0; i < size; i++)
    {
        printf("Item %d >>> ", i+1);
        scanf("%f", &array[i]);
    }

    // Sort array
    sort_array(array, size);

    // Print array elements before sort
    printf("\n\nYour array elements are as follows (ordered):\n");
    for (i = 0; i < size; i++)
    {
        printf("%0.1f \t", array[i]);
    }

    // Prompt for for earch element
    printf("\n\nEnter the element your are searching for: >>> ");
    scanf("%f", &search_val);

    // Search for value
    min = 0;
    max = size - 1;

    while (min <= max)
    {
        mid = (min + max) / 2;
        if(search_val == array[mid]){
            pos = mid + 1;
            break;
        } else if(search_val >= array[mid]){
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }

    // Print result
    if(pos == -1){
        printf("\n\nThe element '%0f' was not found.", search_val);
    } else {
        printf("\nYeahh!! Element found:\n\tvalue >>> %f\n\tposition >>> %d", search_val, pos);
    }
    
    return 0;
}

// Function to sort array (Selection sort)
void sort_array(float array[], int size) {
    int minIndex, i, j, temp;
    
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
}