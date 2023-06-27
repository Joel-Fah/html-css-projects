#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256

int areAnagrams(const char* str1, const char* str2) {
    int count[MAX_CHARS] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0;
    }
    
    for (int i = 0; i < len1; ++i) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    
    for (int i = 0; i < MAX_CHARS; ++i) {
        if (count[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str1[100], str2[100];
    
    // Get words from input
    printf("Enter the first string: >>> ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: >>> ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove the newline characters from the inputs
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    if (areAnagrams(str1, str2)) {
        printf("\nThe strings are anagrams.\n");
    } else {
        printf("\nThe strings are not anagrams.\n");
    }
    
    return 0;
}
