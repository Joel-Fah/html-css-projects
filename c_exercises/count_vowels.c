#include <stdio.h>
#include <string.h>

// Function declaration
int countVowels(const char* str);

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';
    
    // Print result
    printf("Number of vowels: %d\n", countVowels(str));
    
    return 0;
}

int countVowels(const char* str) {
    int i, count = 0;
    int length = strlen(str);
    char ch;
    
    for (int i = 0; i < length; ++i) {
        ch = tolower(str[i]);
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}