#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char s[1005];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int capNext = 1;                       // capitalise first letter of each sentence
    for (int i = 0; s[i]; i++) {
        if (isalpha((unsigned char)s[i])) {
            s[i] = capNext ? toupper(s[i]) : tolower(s[i]);
            capNext = 0;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?') capNext = 1;
    }
    printf("%s\n", s);
    return 0;
}