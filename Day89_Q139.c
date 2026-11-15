#include <stdio.h>
enum Level { LOW = 1, MEDIUM = 5, HIGH = 10 };
int main() {
    enum Level l = MEDIUM;
    printf("LOW = %d\nMEDIUM = %d\nHIGH = %d\n", LOW, MEDIUM, HIGH);
    printf("Variable l holds the integer value %d\n", l);
    return 0;
}