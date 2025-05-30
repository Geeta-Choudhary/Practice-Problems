#include<stdio.h>
#include<string.h>

void slice(char str[100], int start, int end, char result[100]);

int main(){
    char str[100],result[100];
    int start, end;
    
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to allow spaces
    str[strcspn(str, "\n")] = '\0';  // Remove newline

    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);

    slice(str, start, end, result);

    printf("Original string: %s\n", str);
    printf("Sliced string (index %d to %d): %s\n", start, end, result);

    
    return 0;
}

void slice(char str[100], int start, int end, char result[100]){
    int j=0;
    for(int i = start; i <= end && str[i] != '\0'; i++) {
        result[j] = str[i];
        j++; 
    }
    
    result[j] = '\0'; // Null-terminate the sliced string
}