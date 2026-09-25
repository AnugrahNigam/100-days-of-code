//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is: %d\n", n, factorial);

    return 0;
}
