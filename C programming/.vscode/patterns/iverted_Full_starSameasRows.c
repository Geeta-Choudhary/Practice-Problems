// C program to print the  full pyramid of
// stars
#include<stdio.h>
int main()
{
    int i,j,rows,space; 
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    //first for loop for printing the rows
    for(i=rows;i>=1;i--)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=i;j++)
        {
            printf("* ");
            
        }
        printf("\n"); 

    }
    return 0;

}