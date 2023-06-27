#include <stdbool.h>
#include <stdio.h>

bool isPowerOfTwo(int n);

/*Driver program to test above function*/
int main()
{
    int number;

    printf("Enter a number to check >>> ");
    scanf("%d", &number);

	isPowerOfTwo(number) ? printf("\nYes, %d is a power of 2\n", number) : printf("No, %d is not a power of 2\n\n", number);
	return 0;
}

bool isPowerOfTwo(int n)
{
	if (n == 0)
		return 0;
	while (n != 1) {
		if (n % 2 != 0)
			return 0;
		n = n / 2;
	}
	return 1;
}