#include<stdio.h>
int main()
{
    int i,j,rows,space,p; 
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
       
        for(j=1,p=rows;j<rows;j++,p--)
        {
            if((i+j)<=rows)
                printf("  ");
            else
                printf("%d ",p);
        }
        //printf("\n");

        for(j=1;j<=i;j++)
        {
                printf("%d ",j);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("\n");

    for(i=1;i<=rows;i++)
    {
       
        for(j=1,p=rows;j<rows;j++,p--)
        {
            if((i+j)<=rows)
                printf("  ");
            else
                printf("%d ",p);
        }
        //printf("\n");

        for(j=1;j<=i;j++)
        {
                printf("%d ",j);
        }
        printf("\n");
        
    }
   for(i=rows-1;i>=1;i--)
    {
       
        for(j=1,p=rows;j<rows;j++,p--)
        {
            if((i+j)<=rows)
                printf("  ");
            else
                printf("%d ",p);
        }
        //printf("\n");

        for(j=1;j<=i;j++)
        {
                printf("%d ",j);
        }
        printf("\n");
        
    }
    printf("\n");
    printf("\n");
    for(i=1;i<=rows;i++)
    {
       
        for(j=1,p=1;j<rows;j++,p++)
        {
            if((i+j)<=rows)
                printf("  ");
            else
                printf("%d ",p);
        }
        //printf("\n");

        for(j=1,p=rows;j<=i;j++,p--)
        {
                printf("%d ",p);
        }
        printf("\n");
        
    }
    
   
    return 0;

}