/*Q6: Write a program to swap two numbers using a third variable.

*/

#include    <stdio.h>

int main()
{
    int C ,D , B;
printf("enter the value of C and D :");
    scanf("%d %d", &C, &D);

    B=C;
    C=D;
    D=B;

    printf("the value of C is %d\n", C);
    printf("the value of D is %d\n", D);
 return 0;

}