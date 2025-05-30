#include<stdio.h>
#include<string.h>
int main(){
    char str[100],seacrh_char;
    int found=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    printf("Enter the character to search: ");
    scanf(" %c", &seacrh_char); // Note the space before %c to consume any newline character left in the input buffer

    for(int i=0 ;str[i]!='\0';i++){
        if(str[i] == seacrh_char){
            found = 1; // Character found
            printf("Character '%c' is present at index %d\n", seacrh_char, i);
        }
    }
    if(found == 0){
            printf("%c character does not found\n",seacrh_char);// Character not found                       
        }
    
    return 0;
}