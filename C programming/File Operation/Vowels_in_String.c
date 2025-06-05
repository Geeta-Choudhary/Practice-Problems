#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr = fopen("vowels.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char str[100];
    int count = 0;
    
    // Read a string from the file
    if (fgets(str, sizeof(str), fptr) != NULL) {
        // Count vowels in the string
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }
    }
    
    fclose(fptr); // Close the file after reading
    
    printf("The number of vowels in the string is: %d\n", count);
    
    return 0;
}