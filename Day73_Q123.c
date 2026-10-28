#include <stdio.h>
#include <ctype.h>
int main() {
    char fname[100];
    scanf("%99s", fname);
    FILE *fp = fopen(fname, "r");
    if (fp == NULL) { printf("File not found\n"); return 1; }
    int ch, chars = 0, words = 0, lines = 0, inWord = 0, last = '\n';
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) inWord = 0;
        else if (!inWord) { inWord = 1; words++; }
        last = ch;
    }
    if (chars > 0 && last != '\n') lines++;   // last line without newline
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}