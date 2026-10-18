#include <stdio.h>
#include <string.h>
int main() {
    char s[10005];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;
    int start = 0, best = 0, n = strlen(s);
    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];
        if (last[c] >= start) start = last[c] + 1;
        last[c] = i;
        if (i - start + 1 > best) best = i - start + 1;
    }
    printf("%d\n", best);
    return 0;
}