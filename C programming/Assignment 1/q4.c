#include<stdio.h>
int main()
{
    int note1=1,note2=5,note3=10,amount,count,remaining_count;
    printf("The denomination currency with cashier are note1=%d,note2=%d,note3=%d\n",note1,note2,note3);
    printf("Enter the withdrw money amount:\n");
    scanf("%d",&amount);
    
    count=amount/note3;
    remaining_count=amount%note3;
    printf("For the amount=%d the number of notes of note1=%d will be count=%d\n\n",amount,note3,count);
    
    count=remaining_count/note2;
    remaining_count=remaining_count%note2;
    printf("For the amount=%d the number of notes of note2=%d will be count=%d\n\n",amount,note2,count);
    
    count=remaining_count/note1;
    remaining_count=remaining_count%note1;
    printf("For the amount=%d the number of notes of note3=%d will be count=%d\n\n",amount,note1,count);

}