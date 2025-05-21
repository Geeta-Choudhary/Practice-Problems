#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    //Printing in Inverted  order
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+64);
        } 
    printf("\n");
    }
   // printf("\n");
    //Printing in vertical order
    for(i=2;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+64);
        } 
    printf("\n");
    }

    printf("\n\n");
     for(i=1;i<rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+64);
        } 
    printf("\n");
    }
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",i+64);
        } 
    printf("\n");
    }
return 0;
}