#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        } 
    printf("\n");
    }
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        } 
    printf("\n");
    }
}