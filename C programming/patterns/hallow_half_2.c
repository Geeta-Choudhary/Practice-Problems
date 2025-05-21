#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        
        for(j=1;j<=rows;j++)
        {
             if((i+j<=rows))
                printf("    ");
            else if((i==rows)||(j==rows)||(i+j==rows+1))
                 printf("*   ");
                 else
                 printf("    ");
                

        }
        printf("\n");
    }
    printf("\n");
    for(i=rows;i>=1;i--)
    {
        
        for(j=1;j<=rows;j++)
        {
             if((i+j<=rows))
                printf("    ");
            else if((i==rows)||(j==rows)||(i+j==rows+1))
                 printf("*   ");
                 else
                 printf("    ");
                

        }
        printf("\n");
    }
    printf("\n");
     for(i=1;i<=rows;i++)
    {
        
        for(j=1;j<=rows;j++)
        {
             if((i+j<=rows))
                printf("    ");
            else if((j==rows)||(i+j==rows+1))
                 printf("*   ");
                 else
                 printf("    ");
                

        }
        printf("\n");
    }
   
    for(i=rows-1;i>=1;i--)
    {
        
        for(j=1;j<=rows;j++)
        {
             if((i+j<=rows))
                printf("    ");
            else if((j==rows)||(i+j==rows+1))
                 printf("*   ");
                 else
                 printf("    ");
                

        }
        printf("\n");
    }
    printf("\n");
    
    
}
