#include<stdio.h>
 int main(){
    FILE *fprt;
    fprt = fopen("output.txt", "w");
    if(fprt == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
 
    fprintf(fprt, "Hello, World!\n");
    fclose(fprt);
    printf("String has been written to output.txt\n");
    return 0;
 
 }  