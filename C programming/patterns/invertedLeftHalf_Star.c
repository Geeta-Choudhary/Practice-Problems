#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the no . of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}