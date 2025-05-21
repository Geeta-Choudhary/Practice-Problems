#include<stdio.h>
int main(){
    int Ascii = 65;
    int *ch = &Ascii;  // Pointer to Ascii
    while(*ch <= 90) {  // Dereference the pointer
        printf("%c\t", *ch); 
        (*ch)++; // Print the character
    }
    return 0;
}
    