#include <stdio.h>

int main() {
    int dd, mm, yyyy;
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    if (mm < 1 || mm > 12) {
        printf("Invalid month\n");
        return 0;
    }

    printf("%02d-%s-%d\n", dd, months[mm - 1], yyyy);
    return 0;
}