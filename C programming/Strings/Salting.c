#include<stdio.h>
#include<string.h>

int main() {
    char user_password[100],salt_string[100]="123",salted[200];;
    
    printf("Enter the  User password string: ");
    fgets(user_password, sizeof(user_password), stdin);
      
    // Remove trailing newline character
    user_password[strcspn(user_password, "\n")] = '\0';

    strcpy(salted, user_password); // Copy user password to salted
    strcat(salted, salt_string); // Concatenate salt to the password
    

    printf("Salted Password: %s\n", salted);

    return 0;
}
