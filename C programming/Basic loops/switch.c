#include<stdio.h>
int main()
{   int ch;
    printf("Enter the choice1-7");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : printf("\n THIS is monday");
        break;
        case 2 : printf("\n THIS is tuesday");
        break;
        case 3 : printf("\n THIS is WEdnesday");
        break;
        case 4 : printf("\n THIS is thursday");
        break;
        case 5 : printf("\n THIS is friday");
        break;
        case 6 : printf("\n THIS is Saturday");
        break;
        case 7 : printf("\n THIS is Sunday");
        break;
        default : printf("\n The week is over");
    }
    
    
    
}
