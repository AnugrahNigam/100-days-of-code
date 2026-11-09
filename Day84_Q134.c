#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main() {
    int v; scanf("%d", &v);
    switch ((enum Status)v) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n");     break;
        case TIMEOUT: printf("Operation timed out\n");  break;
        default:      printf("Unknown status\n");
    }
    return 0;
}