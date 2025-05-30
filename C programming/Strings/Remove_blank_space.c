#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str,"\n")]='\0';

    for(int i=0;str[i]!='\0';i++){
        if(str[i]== ' ' || str[i]=='\t' || str[i]=='\r') {
            // Shift characters to the left to remove blank space
            for(int j=i; str[j]!='\0'; j++) {
                str[j] = str[j+1];
            }
            i--; // Adjust index after shifting
        }   
    }
    printf("String after removing blank spaces: %s\n", str);

    
    return 0;
}