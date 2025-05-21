#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the num1 and num2:\n");

    scanf("%d%d",&num1,&num2);
    printf("Before interchange : \n num1=%d and num2=%d\n\n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
     printf("After interchange :\n num1=%d and num2=%d \n\n",num1,num2);

}