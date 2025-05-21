#include <stdio.h>
void isIndian();
void isFrench();
int main()
{   
    char caste;
    printf("ASk the user its caste 'i' for indian and 'f' for french:\n");
    scanf("%c",&caste);
    if(caste == 'i')
    {   
        isIndian();
        printf("HII,I am indian\n");
    }
    else{ 
        isFrench();
        printf("HII,I am French");
    }

return 0;
}

void isIndian()
{
    printf("NAMaste\n\n");
}

void isFrench()
{
    printf("Bonjour\n\n");
}