#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int count=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i] != '\n') { // Exclude newline character
            count++;
        }
    }
    
   
    printf("The length of the string is: %d\n",strlen(str)-1); // Subtract 1 to exclude the newline character
    printf("The length of the string is: %d\n", count); // Count excluding newline character
    return 0;
} 