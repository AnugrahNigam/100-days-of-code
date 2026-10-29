#include <stdio.h>
int main() {
    char src[100], dst[100];
    scanf("%99s %99s", src, dst);
    FILE *in = fopen(src, "r");
    if (in == NULL) { printf("Source file not found\n"); return 1; }
    FILE *out = fopen(dst, "w");
    if (out == NULL) { printf("Cannot create destination file\n"); fclose(in); return 1; }
    int ch;
    while ((ch = fgetc(in)) != EOF) fputc(ch, out);
    fclose(in); fclose(out);
    printf("File copied successfully.\n");
    return 0;
}