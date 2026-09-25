//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int n, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }

    if (sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
