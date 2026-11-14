#include <stdio.h>
enum Color { RED, GREEN, BLUE, YELLOW };
int main() {
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};
    for (int i = RED; i <= YELLOW; i++) printf("%s = %d\n", names[i], i);
    return 0;
}