#include <stdio.h>
int main() 
{
    int marks[4],i;
    //first for loop for inserting in array
    for(i=0;i<4;i++)
    {
        printf("ENter the %d element of the marks\n",i);
        scanf("%d",&marks[i]);
    }
    //Second for loop for acessing in array
    for(i=0;i<4;i++)
    {
        printf("The %d element of the marks Array is :%d\n",i,marks[i]);
        
    }
}