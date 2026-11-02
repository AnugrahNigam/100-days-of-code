#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) { printf("Error opening input.txt\n"); return 1; }
    FILE *out = fopen("output.txt", "w");
    if (out == NULL) { printf("Error creating output.txt\n"); fclose(in); return 1; }
    int ch;
    while ((ch = fgetc(in)) != EOF) fputc(toupper(ch), out);
    fclose(in); fclose(out);
    printf("Converted and saved to output.txt\n");
    return 0;
}