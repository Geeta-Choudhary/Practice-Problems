#include <stdio.h>

int main() {
    char subject1[20], subject2[20];

    // Ask user for the subjects
    printf("Enter first subject: ");
    scanf("%s", subject1);
    printf("Enter second subject: ");
    scanf("%s", subject2);

    // Convert subjects to lowercase for comparison
    for (int i = 0; subject1[i]; i++) {
        subject1[i] = tolower(subject1[i]);
    }
    for (int i = 0; subject2[i]; i++) {
        subject2[i] = tolower(subject2[i]);
    }


    // Check the subjects and assign marks
    if ((subject1[0] == 'm' && subject2[0] == 's') || (subject1[0] == 's' && subject2[0] == 'm')) {
        printf("You got 45 marks.\n");
    } else if (subject1[0] == 'm' || subject2[0] == 'm' || subject1[0] == 's' || subject2[0] == 's') {
        printf("You got 15 marks.\n");
    } else {
        printf("No marks assigned.\n");
    }

    return 0;
}
