#include <stdio.h>
int main() {
    int ch;
    float km,inches,miles,foot,cm,kgs,pound,meters;
    printf("Menu :\n 1.KM -> miles\n 2. inches ->foot \n 3.cms -> inches\n 4. pound -> kgs \n5. inches->meters\n 6. Exit\n ");
    

    do
    { 
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch(ch)
       {
        case 1: 
            printf("Enter the km:\n");
            scanf("%f",&km);
            miles=km * 0.621371;
            printf("Miles: %f \n",miles);
            break;
        case 2: 
            printf("Enter the inches:\n");
            scanf("%f",&inches);
            foot=inches * 0.083333 ;
            printf("Foot: %f \n",foot);
            break;
        case 3: 
            printf("Enter the cms:\n");
            scanf("%f",&cm);
            inches=cm *0.393701 ;
            printf("Foot: %f \n",inches);
            break;
        case 4: 
            printf("Enter the pounds:\n");
            scanf("%f",&pound);
            kgs=pound * 0.453592;
            printf("Foot: %f \n",kgs);
            break;
        case 5: 
            printf("Enter the meters:\n");
            scanf("%f",&inches);
            meters=inches * 0.0254;
            printf("Foot: %f \n",meters);
            break;
        case 6: 
            printf("exit");
            break;
        default:
                printf("Invalid choice ");
            break;
        }

    }while(ch!=6);
}