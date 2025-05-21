#include<stdio.h>
int main()
{
  
    float basic_salary,tax;

    // Accept employee  salary details
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    if(basic_salary < 150000)
    {   
        tax=0;
        printf("tax=%.2f\n",tax);
    }
    else if(basic_salary >=150000  &&  basic_salary<=300000)
    {
        tax=(basic_salary*20)/100;
        printf("tax=%.2f\n",tax);
    }
    else if( basic_salary > 300000)
    {
        tax=(basic_salary*30)/100;
        printf("tax=%.2f",tax);
    }
   
}