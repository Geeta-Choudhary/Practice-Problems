#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    //first for loop for printing the rows
    for(i=1;i<=rows;i++)
    {
        //second loop for printing character in each rows
        for(j=1;j<=rows;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
    printf("\n");
      for(i=1;i<=rows;i++)
    {
        //second loop for printing character in each rows
        for(j=1;j<=rows;j++)
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
    printf("\n");

    for(i=1;i<=rows;i++)
    {
        
        for(j=1;j<=rows;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
     printf("\n");

    for(i=1;i<=rows;i++)
    {
        
        for(j=1;j<=rows;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    
}