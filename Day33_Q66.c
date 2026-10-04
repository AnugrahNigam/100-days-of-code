//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, i, j, newElement;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    // Find the appropriate position to insert the new element
    for (i = n - 1; (i >= 0 && arr[i] > newElement); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = newElement; // Insert the new element

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}