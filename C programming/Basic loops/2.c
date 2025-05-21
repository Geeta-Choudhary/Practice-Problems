#include<stdio.h>
int main()
{
    int num,j,i;
    printf("Enter the number for which you want table to be printed\n");
    scanf("%d",&num);
    printf("tables is as follows:\n");
    
    for(j=1;j<=num;j++) 
    {
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\t",j,i,j*i);   
    }
     printf("\n");
    }
    return 0;
}