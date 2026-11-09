#include <stdio.h>
#include <stdlib.h>
int cmp(const void *x, const void *y) { return *(int *)x - *(int *)y; }
int main() {
    int n, k; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    qsort(a, n, sizeof(int), cmp);
    printf("%d\n", a[k - 1]);
    return 0;
}