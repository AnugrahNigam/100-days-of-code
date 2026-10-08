#include <stdio.h>

int main() {
    int n, i, total = 0, leftSum = 0;
    int nums[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for (i = 0; i < n; i++) {
        int rightSum = total - leftSum - nums[i];

        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1\n");
    return 0;
}