#include <stdio.h>
int main() {
    int n, k; scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    int sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];
    int max = sum;
    for (int i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        if (sum > max) max = sum;
    }
    printf("%d\n", max);
    return 0;
}