#include<stdio.h>

struct complex{
    float real;
    float imag;
};

int main() {
    struct complex c1, c2, sum={0};

    // Input first complex number
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Calculate sum of complex numbers
    struct complex *ptr=&c1;
    struct complex *ptr2=&c2;
    sum.real = ptr->real + ptr2->real;
    sum.imag = ptr->imag + ptr2->imag;

    struct complex *sumPtr=&sum;

    // Print the result
    printf("Sum of complex numbers: %.2f + %.2f\n", sumPtr->real, sumPtr->imag);

    return 0;
}