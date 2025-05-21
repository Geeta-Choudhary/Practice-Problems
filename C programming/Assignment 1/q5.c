#include<stdio.h>
int main()
{
     float l, h,b,Surface_Area,volume;
    printf("Enter the length ,breadth and height of the cuboid ");
    scanf("%f%f%f",&l,&b,&h);
    Surface_Area=2*(l*b+l*h+b*h); 
    volume=l*b*h;
    printf("The  Surface_Area = %f \n volume = %f",Surface_Area,volume);

}