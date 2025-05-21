#include<stdio.h>
int main()
{
    int i,j,rows,space,p=1; 
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    //first for loop for printing the rows
    for(i=1;i<=rows;i++)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d",i);
            
        }
        printf("\n"); 

    }
    for(i=rows-1;i>=1;i--)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++ )
        {
            printf("%d",i);
            
        }
        printf("\n"); 

    }

    printf("\n\n");

    for(i=1;i<=rows;i++,p++)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d",p);
            
        }
        printf("\n"); 

    }
    for(i=rows-1;i>=1;i--,p++)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf(" ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++ )
        {
            printf("%d",p);
            
        }
        printf("\n"); 

    }

    printf("\n\n");
    for(i=1;i<=rows;i++)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf("  ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++)
        {   
                printf("%d ",j);
            
        }
        printf("\n"); 

    }
    for(i=rows-1;i>=1;i--)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf("  ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++)
        {   
                printf("%d ",j);
            
        }
        printf("\n"); 

    }


}