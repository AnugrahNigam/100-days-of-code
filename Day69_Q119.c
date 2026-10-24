#include <stdio.h>
static char seen[1000001];            // assumes 0 <= values <= 1,000,000
int main() {
    int n, x; scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (seen[x]) { printf("%d\n", x); return 0; }
        seen[x] = 1;
    }
    return 0;
}