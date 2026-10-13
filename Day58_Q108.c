#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[n], ans[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    ans[0] = 1;
    for (int i = 1; i < n; i++) ans[i] = ans[i - 1] * a[i - 1];   // prefix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {                            // multiply suffix products
        ans[i] *= suffix;
        suffix *= a[i];
    }
    for (int i = 0; i < n; i++) printf("%d%c", ans[i], i < n - 1 ? ' ' : '\n');
    return 0;
}