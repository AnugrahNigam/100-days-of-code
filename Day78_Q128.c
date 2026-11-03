#include <stdio.h>
#include <ctype.h>
int main() {
    char fname[100];
    scanf("%99s", fname);
    FILE *fp = fopen(fname, "r");
    if (fp == NULL) { printf("File not found\n"); return 1; }
    int ch, v = 0, c = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++; else c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    fclose(fp);
    return 0;
}