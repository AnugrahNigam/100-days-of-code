//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    double cp, sp, profit_loss, percentage;

    printf("Enter the cost price and selling price: ");
    scanf("%lf %lf", &cp, &sp);

    profit_loss = sp - cp;

    if (profit_loss > 0) {
        percentage = (profit_loss / cp) * 100;
        printf("Profit %.2f%%\n", percentage);
    } else if (profit_loss < 0) {
        percentage = (fabs(profit_loss) / cp) * 100;
        printf("Loss %.2f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
