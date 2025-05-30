#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Toggle case
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert to lowercase
        }
    }

    printf("String after case conversion: %s\n", str);

    return 0;
}
