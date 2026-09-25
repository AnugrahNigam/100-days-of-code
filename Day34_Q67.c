//Q67: Insert an element in an array at a given position.

#include <stdio.h>
int main() {
    int n, i, position, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right starting from the given position
    for (i = n - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = element; // Insert the new element

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}