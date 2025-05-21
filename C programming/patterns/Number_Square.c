#include<stdio.h>
int main()
{
    int i,j,n,min=0;
    printf("Enter the no .of rows ");
    scanf("%d",&n);
    //first for loop for printing the rows
    for(i=1;i<=2*n-1;i++)
    {
        //second loop for printing columns
        for(j=1;j<=2*n-1;j++)
        {
            int a =i;
            if(i>n) 
            a=2*n-i;
            int b =j; 
            if(b>n) 
            b=2*n-j;
            if(a<b) 
            min=a;
            else
            min=b;
            printf("%d",n+1-min);
        }
        printf("\n");
    }
}