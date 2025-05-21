#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    //Printing in Ascending order
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        } 
    printf("\n");
    }

    //Printing in Descending order
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
            printf("%c ",j+64);
        } 
    printf("\n");
    }
    return 0;
}