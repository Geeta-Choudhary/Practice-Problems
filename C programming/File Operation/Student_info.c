#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("text.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char name[100];
    int roll_no;
    float cgpa;

    // Prompt the user for student information
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to read a string with spaces
    printf("Enter your roll number: ");
    scanf("%d", &roll_no);
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    // Write the student information to the file
    fprintf(fptr, "Name: %s", name);
    fprintf(fptr, "Roll Number: %d\n", roll_no);
    fprintf(fptr, "CGPA: %.2f\n", cgpa);


    fclose(fptr); // Close the file after reading
    return 0;
}