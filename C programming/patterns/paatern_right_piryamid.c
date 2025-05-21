// C program to print the  right half pyramid of
// stars
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    //first for loop for printing the rows
    for(i=0;i<rows;i++)
    {
        //second loop for printing character in each rows
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n"); 

    }
    return 0;

}