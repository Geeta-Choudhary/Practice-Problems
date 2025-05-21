#include<stdio.h>
int main(){
   // int i;
    int arr[5]={0,3,6,9,12};
    int *ptr=&arr[4];
    while(ptr >= arr)
    {
        printf("%d\n\n",*ptr);
         ptr--;
    }
    

    return 0;
}