#include <stdio.h>
#include <string.h>

// Function declaration
void reverseString(char str[]);

int main() {
    char string[100];
    
    // Get input
    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    
    // Remove the newline character from the input
    string[strcspn(string, "\n")] = '\0';
    
    reverseString(string);
    
    // Print resul
    printf("Reversed string: %s\n", string);
    
    return 0;
}

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}