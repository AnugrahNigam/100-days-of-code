#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int cur = a[0], best = a[0];
    for (int i = 1; i < n; i++) {
        cur = (cur + a[i] > a[i]) ? cur + a[i] : a[i];
        if (cur > best) best = cur;
    }
    printf("%d\n", best);   // works for all-negative arrays too
    return 0;
}