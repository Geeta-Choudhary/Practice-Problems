#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","w");
    if(fptr==NULL){
        printf("Error opening file.\n");
        return 1;
    }
    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);


    
    fclose(fptr); // Close the file after reading
    printf("Characters written to file successfully.\n");
    fptr = fopen("text.txt", "r");
    printf("Reading characters from file:\n");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    char c;
    while ((c = fgetc(fptr)) != EOF) {
        printf("the Character = %c\n", c);
    }
    return 0;
}