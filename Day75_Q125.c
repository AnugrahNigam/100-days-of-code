#include <stdio.h>
#include <string.h>
int main() {
    char fname[100], text[1005];
    printf("Enter filename: ");
    scanf("%99s", fname);
    getchar();                                  // consume newline
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    FILE *fp = fopen(fname, "a");
    if (fp == NULL) { printf("Error opening file\n"); return 1; }
    fputs(text, fp);
    if (text[strlen(text) - 1] != '\n') fputc('\n', fp);
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}