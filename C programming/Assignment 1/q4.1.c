#include <stdio.h>

int main() {
    int denominations[] = {10, 5, 1}; // Available note denominations
    int size = sizeof(denominations) / sizeof(denominations[0]); // Number of denominations
    int amount, count, remaining_amount;

    printf("The denomination currency with cashier are: ");
    for (int i = 0; i < size; i++) {
        printf("note%d=%d ", i + 1, denominations[i]);
    }
    printf("\n");

    printf("Enter the withdrawal money amount:\n");
    scanf("%d", &amount);

    remaining_amount = amount;

    for (int i = 0; i < size; i++) {
        count = remaining_amount / denominations[i]; // Calculate the number of notes
        remaining_amount = remaining_amount % denominations[i]; // Calculate the remaining amount

        printf("For the amount=%d, the number of notes of denomination %d will be count=%d\n",
               amount, denominations[i], count);
    }

    return 0;
}
