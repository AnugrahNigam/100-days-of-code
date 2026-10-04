//Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for lowercase alphabets

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each lowercase alphabet
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    // Find the first repeating lowercase alphabet
    char firstRepeating = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            firstRepeating = str[i];
            break;
        }
    }

    if (firstRepeating != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}