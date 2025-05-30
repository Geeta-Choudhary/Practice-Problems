#include<stdio.h>
#include<string.h>
int main() {
    char source[100], destination[100];
    
    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin);
    puts(source); // Print the source string
   
    
    printf("Enter a string to copy: ");
    fgets(destination, sizeof(destination), stdin);
    puts(destination); // Print the destination string
    
    // Copy the string
    strcpy( source, destination);
    
    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    
    return 0;
}