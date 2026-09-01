//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, profitPercentage, lossPercentage;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("Profit %.2f%%\n", profitPercentage);
    } else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("Loss %.2f%%\n", lossPercentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}