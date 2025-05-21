#include <stdio.h>
//#include <math.h>

int main()
{
    float sub1, sub2, sub3,avg,percent;

    // Prompt the user to enter values for a, b, and c
    printf("Enter the values of sub1,sub2,sub3: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);  // Removed unnecessary space before "%d"

    // Print the entered values
    printf("The values are:\n subject 1 marks = %f\n subject 2 marks = %f\n subject 3 marks = %f\n",sub1, sub2, sub3 );
    avg=((sub1+sub2+ sub3)/3);
    //percent=avg/100;
    if(avg> 75 )
    {
        printf("Cleared with Distinction with percentage=%f",avg);
    }
    else  if((avg > 60 ))
    {
        printf("Cleared with Class I with percentage=%f",avg);
    }
     else  if((avg > 50 )&&(avg < 55 ))
    {
        printf("Cleared with Class II with percentage=%f",avg);
    }
    else  if((avg > 54 )&&(avg < 35 ))
    {
        printf("PASS with percentage=%f",avg);
    }
    else{
        printf("FAIL with percentage=%f",avg);
    }


    return 0;  // Proper termination of the program
}

