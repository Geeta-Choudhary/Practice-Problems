#include <stdio.h>

struct Student {
    char name[50];
    char course[50];
    float cgpa;
    int marks;
};

int main() {
    struct Student students[5];
    FILE *fptr = fopen("students.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // Print header
    fprintf(fptr, "%-15s %-15s %-10s %-10s\n", "Name", "Course", "CGPA", "Marks");
    fprintf(fptr, "------------------------------------------------------------\n");

    // Write student data in table format
    for (int i = 0; i < 5; i++) {
        fprintf(fptr, "%-15s %-15s %-10.2f %-10d\n",
                students[i].name,
                students[i].course,
                students[i].cgpa,
                students[i].marks);
    }

    fclose(fptr);
    printf("Student data has been written to students.txt in table format.\n");

    return 0;
}
