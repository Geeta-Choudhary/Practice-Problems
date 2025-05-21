#include<stdio.h>
#include<math.h>

float circleArea();
double squareArea();
int rectangleArea();

int main()
{
    printf("Calculating the areas of square, circle, rectangle\n");
    circleArea();
    squareArea();
    rectangleArea();
    return 0;
}

float circleArea()
{
    float r, area, pi = 3.14;
    printf("Enter the radius:\n");
    scanf("%f", &r);
    area = pi * r * r;
    printf("Area of the Circle is: %f\n", area);
    return area;
}

double squareArea()
{
    int side;
    double area;
    printf("Enter the side:\n");
    scanf("%d", &side);
    area = pow(side, 2);
    printf("Area of the square is: %lf\n", area);
    return area;
}

int rectangleArea()
{
    int l, b, area;
    printf("Enter the length and breadth:\n");
    scanf("%d%d", &l, &b);
    area = l * b;
    printf("Area of the rectangle is: %d\n", area);
    return area;
}
