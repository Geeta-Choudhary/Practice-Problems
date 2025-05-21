// C program to print the  right half pyramid of
// stars
#include<stdio.h>
int main()
{
    int i,j,rows,number=1;
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    //first for loop for printing the rows
    // for(i=rows;i>=1;i--)
    for(i=1;i<=rows;i++)
    {
        //second loop for printing character in each rows
        for(j=1;j<=i;j++)
        {
            printf("%d ",number);
            number++;
        }
        printf("\n"); 

    }
    return 0;

}