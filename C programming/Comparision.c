#include<stdio.h>

void compare(int *n1 ,int *n2);

int main(){
    int x=124,y=867;
    compare(&x,&y);

    return 0;
}
void compare(int *n1 ,int *n2)
{
    if (*(n1) > *(n2) )
    {
        printf("n1=%d is greater then n2=%d",*n1,*n2);
    }
    else{
        printf("n1=%d is less then n2=%d",*n1,*n2); 
    }
}
    