#include <stdio.h>

int main() {
    FILE *fptr;
    int num, i, value;

    fptr = fopen("odd_numbers.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the number of items to read: ");
    scanf("%d", &num);

    // Skip the first line (the header)
    char temp[100];
    fgets(temp, sizeof(temp), fptr);

    printf("Reading %d numbers from the file:\n", num);

    for (i = 1; i <= num; i++) {
        if (fscanf(fptr, "%d", &value) == 1) {
            printf("%d ", value);
        } else {
            printf("\nError reading number #%d. Possibly end of file.\n", i);
            break;
        }
    }

    fclose(fptr);
    printf("\nDone reading from odd_numbers.txt\n");
    return 0;
}
