#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    long long sum = 0, x;
    for (int i = 0; i < n; i++) { scanf("%lld", &x); sum += x; }
    printf("%lld\n", (long long)n * (n + 1) / 2 - sum);
    return 0;
}