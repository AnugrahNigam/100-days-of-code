//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n, firstDigit, lastDigit, numDigits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Find the last digit
    lastDigit = n % 10;

    // Find the number of digits
    temp = n;
    while (temp != 0) {
        temp /= 10;
        numDigits++;
    }

    // Find the first digit
    firstDigit = n / (10^(numDigits - 1));

    // Swap the first and last digits
    n = n - firstDigit * (10^(numDigits - 1)) - lastDigit;
    n = n + lastDigit * (10^(numDigits - 1)) + firstDigit;

    printf("Number after swapping first and last digits: %d\n", n);

    return 0;
}
