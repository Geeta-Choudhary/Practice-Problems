#include  <stdio.h>
#include  <string.h>            
int main() {
    char str[100];
    char ch;
    int i=0;
     while(ch !='\n'){
        scanf("%c", &ch);
        str[i] = ch; // Store character in the array
        i++;
     }
    str[i]= '\0'; // Null-terminate the string
    puts(str); // Print the string

    return 0;
}