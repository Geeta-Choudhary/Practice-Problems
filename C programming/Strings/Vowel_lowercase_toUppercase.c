#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character
    str[strcspn(str, "\n")] = '\0';
    
    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        // Convert lowercase vowels to uppercase
        switch(ch) {
            case 'a': str[i] = 'A'; break;
            case 'e': str[i] = 'E'; break;
            case 'i': str[i] = 'I'; break;
            case 'o': str[i] = 'O'; break;
            case 'u': str[i] = 'U'; break;
        }
    }
    
    printf("Modified string: %s\n", str);
    
    return 0;
}