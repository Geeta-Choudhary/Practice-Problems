#include <stdio.h>
int main()
{
    int j = 0, i = 0, index = 0, num;
    printf("enteer the number\n");
    scanf("%d", &num);

    do
    {
        /* code */
        i = i + 2;
        printf("\n %d", i);
    } while (i < 30);
    printf("\n\n");
    do
    {
        // this printf is to print from 1 to nmber given
        // printf("\n %d\t",index +1);
        // this printf simpliy prints 0 to n-1
        printf("\n %d\t", index);
        index = index + 1;

    } while (index < num);

    printf("\n\n");
    
}