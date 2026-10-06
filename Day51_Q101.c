#include <stdio.h>

// Finds the first (findFirst = 1) or last (findFirst = 0) index of target, or -1.
int search(int nums[], int n, int target, int findFirst) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid;
            if (findFirst)
                high = mid - 1;   // keep looking on the left
            else
                low = mid + 1;    // keep looking on the right
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, i, target;
    int nums[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    scanf("%d", &target);

    printf("%d,%d\n", search(nums, n, target, 1), search(nums, n, target, 0));
    return 0;
}