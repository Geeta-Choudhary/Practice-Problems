#include<stdio.h>
int main()
{
    int emp_id;
    float basic_salary, hra, da, pt, gross_salary, take_home_salary;

    // Accept employee details
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp_id);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Calculate allowances and deductions
    hra = 0.1 * basic_salary;
    da = 0.3 * basic_salary;
    pt = 0.05 * basic_salary;
    gross_salary = basic_salary + hra + da;
    take_home_salary = gross_salary - pt;

    // Display results
    printf("\nEmployee ID: %d\n", emp_id);
    printf("Take-Home Salary: %.2f\n", take_home_salary);

    return 0;
}