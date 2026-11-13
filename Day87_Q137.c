#include <stdio.h>
enum Role { ADMIN, USER, GUEST };
int main() {
    int v; scanf("%d", &v);   // 0 = ADMIN, 1 = USER, 2 = GUEST
    switch ((enum Role)v) {
        case ADMIN: printf("Welcome Admin! Full access granted.\n"); break;
        case USER:  printf("Welcome User! Limited access granted.\n"); break;
        case GUEST: printf("Welcome Guest! Read-only access.\n"); break;
        default:    printf("Invalid role\n");
    }
    return 0;
}