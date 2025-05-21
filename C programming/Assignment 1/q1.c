#include<stdio.h>
int main()
{
    float h,r,Surface_Area,volume,pi=3.14;
    printf("Enter the height and the radius of the cyclinder ");
    scanf("%f%f",&h,&r);
    Surface_Area=(2*pi*r*r) + (2*pi*r*h);
    volume=pi*r*r*h;
    printf("The  Surface_Area = %f \n volume = %f",Surface_Area,volume);

}
