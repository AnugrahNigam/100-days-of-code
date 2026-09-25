//Q70: Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, i, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Normalize k to be within the bounds of the array
    k = k % n;

    // Create a temporary array to store the rotated elements
    int temp[n];
    for (i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy the rotated elements back to the original array
    for (i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
