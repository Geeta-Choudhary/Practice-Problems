#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("output.txt", "r");
    char ch;
    ch= fgetc(fptr); // Read a character from the file
    while(ch != EOF) {
        printf(" %c", ch);
        ch = fgetc(fptr); // Read the next character
    }
 printf("\n"); // Print a newline after reading all characters
    
    fclose(fptr); // Close the file after reading
    return 0;
}