#include<stdio.h>
int main()
{
    int i,j,p,rows;
    printf("Enter the no . of rows:");
    scanf("%d",&rows);
    for(i=1,p=rows;i<=rows,p>=1;i++,p--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
        }
        printf("\n");
    }
    printf("\n");

    for(i=1,p=1;i<=rows,p<=rows;i++,p++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
            
        }
        printf("\n");
    }
     printf("\n");

    for(i=1,p=0;i<=rows;i++,p+=2)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",p);
            
        }
        printf("\n");
    }

    printf("\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",2);
            }
        else
            {
            printf("%d ",1);
            }
        }
        printf("\n");
    }
    return 0;
}