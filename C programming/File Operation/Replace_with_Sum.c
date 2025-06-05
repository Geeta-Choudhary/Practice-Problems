#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("duplicate.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    int  num,sum=0;
    int count=0;
    
        // Read an integer from the file
    while(fscanf(fptr, "%d", &num) == 1) {
            // Add the number to the sum
            sum += num;
            count++;
    }
    fclose(fptr); // Close the file after reading

    fptr= fopen("duplicate.txt", "w");
     if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    /*
     for (int i = 0; i<count; i++)
      {
         fprintf(fptr, "%d\n", sum);
      }
     */ 
          
    //fprintf(fptr, "%d\n", sum);
        
        
    fclose(fptr); // Close the file after reading
    printf("The sum of the numbers is: %d\n", sum);
    printf("The file has been replaced with the sum.\n");
    return 0;
}