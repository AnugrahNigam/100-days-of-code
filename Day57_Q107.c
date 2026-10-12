#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) {
        int res = -1;
        for (int j = i - 1; j >= 0; j--)
            if (a[j] > a[i]) { res = a[j]; break; }
        printf("%d%s", res, i < n - 1 ? "," : "\n");
    }
    return 0;
}