#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    long long total = (long long) n * (n + 1) / 2;

    for (x = 1; (long long) x * x <= total; x++) {
        if ((long long) x * x == total) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}