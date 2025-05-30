#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str,"\n")]='\0';
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if the character is a vowel (case insensitive)
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
             printf("%c \n", ch);
            count++;
        }
    }
    printf("Number of vowels in the string: %d\n", count);
    return 0;
}