#include <stdio.h>
int main() {
    char fname[100];
    printf("Enter filename: ");
    scanf("%99s", fname);
    FILE *fp = fopen(fname, "r");
    if (fp == NULL) { printf("Error: File does not exist.\n"); return 1; }
    int ch;
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    fclose(fp);
    return 0;
}