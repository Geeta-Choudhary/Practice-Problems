#include <stdio.h>
#include <stdlib.h>

struct vector{
    int x;
    int y;
};
void calcSum(struct vector v1, struct vector v2 ,struct vector sum);


int main(){
    struct vector v1, v2, sum={0}, difference;
    
    // Input first vector
    printf("Enter first vector (x y): ");
    scanf("%d %d", &v1.x, &v1.y);
    
    // Input second vector
    printf("Enter second vector (x y): ");
    scanf("%d %d", &v2.x, &v2.y);
    
    // Calculate sum and difference
    calcSum(v1, v2, sum);
 
  
    return 0;
}

void calcSum(struct vector v1, struct vector v2 ,struct vector sum)
{
    int sum_x = v1.x + v2.x;
    int sum_y = v1.y + v2.y;
    
    printf("Sum of vectors: (%d, %d)\n", sum_x, sum_y);
}





