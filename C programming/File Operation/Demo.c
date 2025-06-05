#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    if(fptr==NULL){
        printf("Error opening file.\n");
        return 1;
    }
    char c;
    //fprintf(fptr,"the Character =%c\n",c);
   
   /*printf("the Character =%c\n",fgetc(fptr));
    printf("the Character =%c\n",fgetc(fptr));
    printf("the Character =%c\n",fgetc(fptr));
    printf("the Character =%c\n",fgetc(fptr));
    printf("the Character =%c\n",fgetc(fptr));
    */
    while((c=fgetc(fptr))!=EOF){
        printf("the Character =%c\n",c);
    }
}