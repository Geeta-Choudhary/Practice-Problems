#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character: ");
    scanf(" %c", &ch);  // Removed extra space
    printf("The Character is: %c and its ASCII value is: %d\n", ch, ch);
    int prev= ch -1;
    printf("The Character  Before %c is %c and its ASCII value is: %d\n", ch, ch-1 ,prev);
    int after= ch +1;
    printf("The Character  Before %c is %c and its ASCII value is: %d\n", ch, ch+1 ,after);
    return 0;
}
