//Q94: Find the longest word in a sentence.

#include <stdio.h>
int main() {
    char str[100], longest[100];
    int maxLength = 0, currentLength = 0, startIndex = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = i - currentLength;
            }
            currentLength = 0;
        }
    }

    
    if (currentLength > maxLength) {
        maxLength = currentLength;
        startIndex = strlen(str) - currentLength - 1; 
    }

    
    for (int i = 0; i < maxLength; i++) {
        longest[i] = str[startIndex + i];
    }
    longest[maxLength] = '\0'; 

    printf("The longest word is: %s\n", longest);

    return 0;
}