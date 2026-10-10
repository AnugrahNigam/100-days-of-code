#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = 0, count = 0;

    // Pass 1: Boyer-Moore voting to find the only possible candidate
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Pass 2: verify the candidate appears more than n/2 times
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            freq++;
    }

    return (freq > n / 2) ? candidate : -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("%d\n", majorityElement(nums, n));
    return 0;
}