

#include <stdio.h>
int main() {
    int x, a, r, result = 0;
    printf("Enter a number: ");
    scanf("%d", &x);

    a = x;

    while (a != 0) {
        r = a % 10;
        int f = 1;
        for (int i = 1; i <= r; i++) {
            f *= i;
        }
        result += f;
        a /= 10;
    }

    if (result == x) {
        printf("%d is a Krishnamurthy number.\n", x);
    } else {
        printf("%d is not a Krishnamurthy number.\n", x);
    }

    return 0;
}