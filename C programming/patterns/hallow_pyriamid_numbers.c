#include<stdio.h>
int main()
{
    int i,j,rows,p;
    printf("Enter the no .of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        
        for(j=1,p=1;j<=i;j++,p++)
        {
             if((i==rows)||(i==j)||(j==1))
                printf("%d  ",p);
            else 
                printf("   ");

        }
        printf("\n");
    }
}