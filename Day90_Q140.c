#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};
int main() {
    struct Person p;
    int g;
    scanf(" %49[^\n]", p.name);
    scanf("%d %d", &p.age, &g);          // 0 = MALE, 1 = FEMALE, 2 = OTHER
    p.gender = (enum Gender)g;
    printf("Name: %s\nAge: %d\nGender: ", p.name, p.age);
    switch (p.gender) {
        case MALE:   printf("Male\n");   break;
        case FEMALE: printf("Female\n"); break;
        default:     printf("Other\n");
    }
    return 0;
}