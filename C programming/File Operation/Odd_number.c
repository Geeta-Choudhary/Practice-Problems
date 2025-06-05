#include<stdio.h>

int main(){
   
    FILE *fptr;
    int num, i;
    fptr = fopen("odd_numbers.txt", "w");

    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a number: ");
    scanf("%d", &num);
    fprintf(fptr, "Odd numbers from 1 to %d are:\n", num);
    for(i = 1; i <= num; i++) {
        if(i % 2 != 0) {
            fprintf(fptr, "%d\n", i);
        }
    }
    fclose(fptr);
    printf("Odd numbers have been written to odd_numbers.txt\n");
}