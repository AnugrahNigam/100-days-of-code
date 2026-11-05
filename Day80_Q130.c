#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) { printf("Error opening file\n"); return 1; }
    for (int i = 0; i < n; i++) {
        char name[50]; int roll; float marks;
        scanf("%49s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    char name[50]; int roll; float marks;
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", name, roll, marks);
    fclose(fp);
    return 0;
}