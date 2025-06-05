#include<stdio.h>

typedef struct address{
    int house_number;
    char block[50];
    char city[50];
    char state[50];
     
} home;

void print_address(home h ) {
    
    printf("\nAddress Details:"); 
    printf("------------------\n");
    printf("House Number: %d\n", h.house_number);
    printf("Block: %s\n", h.block);
    printf("City: %s\n", h.city);
    printf("State: %s\n", h.state);
    printf("======================================\n");
     
}

int main() {
    home h1;
    
    int no_of_houses;
    // Input number of houses
    printf("Enter the number of houses: ");
    scanf("%d", &no_of_houses);
    for(int i=0;i<no_of_houses;i++){
        printf("Enter details for house %d:\n", i + 1);
        // Input address details
        printf("Enter house number: ");
        scanf("%d", &h1.house_number);
        printf("Enter block: ");
        scanf("%s", h1.block);
        printf("Enter city: ");
        scanf("%s", h1.city);
        printf("Enter state: ");
        scanf("%s", h1.state);
        
        // Print address details
        print_address(h1);
       
    }
    printf("\n");
    printf("All addresses have been entered successfully.\n");
    printf("Thank you for using the address entry system.\n");
    
    return 0;
}