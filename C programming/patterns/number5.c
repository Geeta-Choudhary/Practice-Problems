#include<stdio.h>
int main()
{
    int i,j,rows,space;
    printf("Enter the no . of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
       
        for(j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
                printf("  ");
            else if(i%2==0)
                printf("3 ");
            else
                printf("1 ");
        }
        printf("\n");
        
    }
    printf("\n");

    for(i=1;i<=rows;i++)
    {
       
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
                printf("B  ");
            else
                printf("A  ");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=rows;i>=1;i--)
    {
        int p=rows;
        for(j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
                printf("   ");
            else    
            printf("%d  ",p);
            p--;
        }
        printf("\n");
        
    }

    printf("\n\n");

    for(i=rows;i>=1;i--)
    {
        //int p=rows;
        for(j=1;j<=rows;j++)
        {
            if((i+j)<=rows)
                printf("   ");
            else    
            printf("%d  ",j);
            //p--;
        }
        printf("\n");
        
    }

    
           
}