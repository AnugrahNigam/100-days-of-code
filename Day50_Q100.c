#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, first = 1;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (!first)
                printf(",");
            first = 0;
            for (k = i; k <= j; k++)
                printf("%c", s[k]);
        }
    }
    printf("\n");

    return 0;
}