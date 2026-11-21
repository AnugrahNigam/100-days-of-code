#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++)
        if (s[i].marks > top.marks) top = s[i];
    return top;
}
int main() {
    int n; scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++)
        scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    struct Student t = findTop(s, n);
    printf("Top Student: %s, Roll No: %d, Marks: %.2f\n", t.name, t.roll_no, t.marks);
    return 0;
}