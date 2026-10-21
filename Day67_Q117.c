#include <stdio.h>
int main() {
    int m, n; scanf("%d", &m);
    int a[m];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    int i = 0, j = 0;
    while (i < m && j < n) printf("%d ", a[i] <= b[j] ? a[i++] : b[j++]);
    while (i < m) printf("%d ", a[i++]);
    while (j < n) printf("%d ", b[j++]);
    printf("\n");
    return 0;
}