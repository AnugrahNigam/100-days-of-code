#include <stdio.h>
int main() {
    char name[100]; int age;
    printf("Enter name: ");
    scanf(" %99[^\n]", name);
    printf("Enter age: ");
    scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) { printf("Error opening file\n"); return 1; }
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);
    printf("Data was successfully saved.\n");
    return 0;
}