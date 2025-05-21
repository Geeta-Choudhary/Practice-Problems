#include<stdio.h>
#include<math.h>
float circleArea(float r);
float squareArea(int side);
int rectangleArea(int l,int b);

int main()
{
    int choice;
    printf(" Menu Calculating the areas \n 1. circle \n 2.square \n 3.rectangle\n");
  float r;
  int side, l, b;
  do{
        printf("Enter your choice:");
        scanf("%d",&choice);
    switch(choice){
        case 1:
    printf("For Circle:\n");
    printf("Enter the radius:\n ");
    scanf("%f", &r);
    circleArea(r);
    break;

        case 2:
    printf("For Square:\n");
    printf("Enter the side:\n ");
    scanf("%d", &side);
    squareArea(side);
    break;

        case 3:
    printf("For Rectangle:\n");
    printf("Enter the length and breadth:\n ");
    scanf("%d%d", &l, &b);
    rectangleArea(l, b);
    break;

        case 4:
        printf("exit");
        break;
    
        default:
        printf("Invalid choice");
    }
    }while(choice!=4);
    return 0;

}
float circleArea(float r)
{   float area,pi;
    pi=3.14;
    area= pi*r*r;
    printf("Area of the Circle is :%f\n",area);
return area;
}
float squareArea(int side)
{   float area;
   
    area=pow(side,2);
    printf("Area of the square is :%f\n",area);
    return area;

}
int rectangleArea(int l,int b)
{   int area;
    area=l*b;
    printf("Area of the rectangle is :%d\n",area);
    return area;
}