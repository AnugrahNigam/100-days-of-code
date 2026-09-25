//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1) - 1;
    len2 = strlen(str2) - 1;

    if (len1 != len2) {
        printf("Not anagrams\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}