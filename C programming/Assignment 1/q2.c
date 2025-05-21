#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    double distance;
    printf("Enter the x1,y1 co-ordinates of point 1:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the x2,y2 co-ordinates of point 2:\n");
    scanf("%d%d",&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("THe Distance between the x and y co-ordinates of the two pints is :%f",distance);
}