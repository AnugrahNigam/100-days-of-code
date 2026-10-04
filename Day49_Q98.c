#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, len, lastSpace = -1;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';   // remove trailing newline
    len = strlen(name);

    // trim trailing spaces
    while (len > 0 && name[len - 1] == ' ')
        name[--len] = '\0';

    // find the last space (start of surname)
    for (i = 0; i < len; i++)
        if (name[i] == ' ')
            lastSpace = i;

    // print initials of every word before the surname
    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            if (name[i] != ' ')
                printf("%c.", toupper(name[i]));
        }
    }

    // print the surname in full
    if (lastSpace != -1)
        printf(" ");
    printf("%s\n", name + lastSpace + 1);

    return 0;
}