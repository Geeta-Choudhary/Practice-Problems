#include<stdio.h>
int main()
{
    int i,j,rows,space,p; 
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    //first for loop for printing the rows
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
            if(i%2==0)
                printf("$ ");
            else
                printf("# ");
            
        }
        printf("\n"); 

    }
    printf("\n");
    for(i=rows;i>=1;i--)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf("  ");   
        }
        //second loop for printing space in each rows 
        for(j=1;j<=2*i-1;j++)
        {   
            if(i%2==0)
                printf("0 ");
            else
                printf("1 ");
            
        }
        printf("\n"); 

    }

    printf("\n");

    for(i=1;i<=rows;i++)
    {   
        //second loop for printing space in each rows
        for(space=1;space<=(rows-i);space++)
        {
            printf("  ");   
        }
        //second loop for printing space in each rows 
        for(j=1,p=1;j<=2*i-1;j++,p++)
        {   
                printf("%d ",p);
            
        }
        printf("\n"); 

    }
    return 0;

}