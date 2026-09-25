//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    int n, complement = 0, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n != 0) {
        int digit = n % 10;
        if (digit == 0) {
            complement += 1 * base;
        }
        n /= 10;
        base *= 10;
    }

    printf("1's complement: %d\n", complement);

    return 0;
}
