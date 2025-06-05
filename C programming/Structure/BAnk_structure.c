#include<stdio.h>
#include<stdlib.h>
#include<math.h>    
#include<string.h>



typedef struct bank_account {
    int account_number;
    char account_holder[50];
    float balance;
} hdfc;

void print_account_details(hdfc account) {
    printf("\nAccount Details:");
    printf("\n------------------");
    printf("\nAccount Number: %d", account.account_number);
    printf("\nAccount Holder: %s", account.account_holder);
    printf("\nBalance: %.4f", account.balance);
    printf("\n======================================\n");
}

int main() {
    hdfc *accounts;
    int no_of_accounts;

    // Input number of accounts
    printf("Enter the number of accounts: ");
    scanf("%d", &no_of_accounts);

    // Allocate memory for accounts
    accounts = (hdfc *)malloc(no_of_accounts * sizeof(hdfc));
    if (accounts == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < no_of_accounts; i++) {
        printf("\nEnter details for account %d:\n", i + 1);
        // Input account details
        printf("Enter account number: ");
        scanf("%d", &accounts[i].account_number);
        printf("Enter account holder name: ");
        scanf("%s", accounts[i].account_holder);
        printf("Enter balance: ");
        scanf("%f", &accounts[i].balance);

        // Print account details
        print_account_details(accounts[i]);
    }

    printf("\nAll accounts have been entered successfully.\n");
    printf("Thank you for using the bank account entry system.\n");

    // Free allocated memory
    free(accounts);

    return 0;
}