/*Q3: Write a program to calculate the area and perimeter of a
 rectangle given its length and breadth.

*/

#include <stdio.h>
int main() {
    float length, breadth, area, perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The area of the rectangle is: %.2f\n", area);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}