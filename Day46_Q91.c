//Q91: Remove all vowels from a string.

#include <stdio.h>
int main() {
    char str[100], result[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result[j++] = ch;
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String after removing vowels: %s", result);

    return 0;
}