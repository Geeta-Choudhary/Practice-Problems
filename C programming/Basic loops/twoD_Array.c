#include <stdio.h>
int main() 
{

int n,m ,j,i;
    printf("Enter the no . of rows and  no .of columns");
    scanf("%d%d",&n,&m);

int exam_score[n][m];

    //first for loop for inserting in  rows of array
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        //printf("enter the elements:\n");
        {
        printf("[%d ,%d]\t:",i,j);
        scanf("%d",&exam_score[i][j]);
       // printf("\t");
        }
        printf("\n");
    }
    //Second for loop for acessing in array
    for(i=0;i<n;i++)
    {   
        for(j=0;j<m;j++)
        {
        printf("[%d, %d]:%d \t",i,j,exam_score[i][j]);
        
        }
        printf("\n");
    }
}