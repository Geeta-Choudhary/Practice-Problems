#include <stdio.h>
int main() {
    int num, i,j;

    printf("Enter the number for which you want the table to be printed: ");
    scanf("%d", &num);
    printf("\nTables are as follows:\n");

    // Print tables side by side
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= num; j++) 
        {
        
            printf("%d x  %d = %d\t", j, i, j* i);
          
        }
     printf("\n");
    
    }
    return 0;
}
