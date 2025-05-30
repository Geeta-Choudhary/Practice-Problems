#include<stdio.h>
#include<string.h>

int main() {
    char source[100], destination[100];
    
    printf("Enter the first string: ");
    fgets(source, sizeof(source), stdin);
    
    printf("Enter the second string: ");
    fgets(destination, sizeof(destination), stdin);

    // Remove trailing newline characters (optional but recommended)
    source[strcspn(source, "\n")] = '\0';
    destination[strcspn(destination, "\n")] = '\0';

       
     // Add space between
    // strcat(source, " ");  

    // Concatenate destination to source
    strcat(source, destination);

    printf("Concatenated string: %s\n", source);

    return 0;
}
