#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
int main() {
    struct Student s;
    scanf(" %49[^\n]", s.name);
    scanf("%d %f", &s.roll_no, &s.marks);
    printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}