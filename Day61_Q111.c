#include <stdio.h>
int main() {
    int n, k; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (int i = 0; i + k <= n; i++) {
        int res = 0;
        for (int j = i; j < i + k; j++)
            if (a[j] < 0) { res = a[j]; break; }
        printf("%d ", res);
    }
    printf("\n");
    return 0;
}