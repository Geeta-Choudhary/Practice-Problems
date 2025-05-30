#include<stdio.h>
#include<string.h>

int main() {
    char source[100], destination[100];
    
    printf("Enter the first string: ");
    fgets(source, sizeof(source), stdin);
    
    printf("Enter the second string: ");
    fgets(destination, sizeof(destination), stdin);

    // Compare destination to source
        printf("%d",strcmp(source, destination));
    

    
}
