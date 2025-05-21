#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char subject1[30], subject2[30];

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
    if ((strcmp(subject1, "maths") == 0 && strcmp(subject2, "science") == 0) ||
        (strcmp(subject1, "science") == 0 && strcmp(subject2, "maths") == 0)) {
        printf("You got 45 marks.\n");
    } else if (strcmp(subject1, "maths") == 0 || strcmp(subject2, "maths") == 0 ||
               strcmp(subject1, "science") == 0 || strcmp(subject2, "science") == 0) {
        printf("You got 15 marks.\n");
    } else {
        printf("No marks assigned.\n");
    }

    return 0;
}
