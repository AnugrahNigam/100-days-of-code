/*Q2: Write a program to input two numbers and display their sum,
 difference, product, and quotient. */

 #include <stdio.h>
 int main() {
int a,b,sum,diff,prod,quot;
 printf("Enter two numbers: ");
 scanf("%d %d",&a,&b);

    sum = a + b;        
    diff = a - b;
    prod = a * b;
    quot = a / b;
    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", diff);
    printf("The product is: %d\n", prod);
    printf("The quotient is: %d\n", quot);

    return 0;
 }

