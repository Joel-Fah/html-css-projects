#include <stdio.h>
#include <string.h>

int main() {
    int i, j, isPalindrome = 1;
    char word[100];

    // Get word from input
    printf("Enter your word: >>> ");
    gets(word);

    // Check palindrome
    for (i = 0, j = strlen(word) - 1; i < strlen(word) / 2; i++, j--)
    {
        if(word[i] != word[j]){
            isPalindrome = 0;
            break;
        }
    }

    // Print result
    if(isPalindrome == 1) {
        printf("\n%s is a palindrome\n\n", word);
    } else {
        printf("\n'%s' is not a palindrome\n\n", word);
    }
}
