#include <stdio.h>

// Function declarations
long power_iterative(long index, long power);
long power_recursive(long index, long power);

int main()
{
    long index, power;

    // Get input
    printf("Enter the index of the operation: >>> ");
    scanf("%ld", &index);

    printf("Enter the power of the operation: >>> ");
    scanf("%ld", &power);

    // Print result
    printf("The result of %ld to the power %ld is:\n\tIterative >>> %ld\n\tRecursive >>> %ld", index, power, power_iterative(index, power), power_recursive(index, power));
}

long power_iterative(long index, long power)
{
    int i, result = 1;

    for (i = 0; i < power; i++)
    {
        result = result * index;
    }

    return result;
}

long power_recursive(long index, long power)
{
    if (power == 1)
        return index;
    return (index * power_recursive(index, power - 1));
}