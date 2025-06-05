#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct students{
    int roll_number;
    char name[50];
    char course[50];
    float marks;
} s;

typedef struct teachers{
    int teacher_id;
    char name[50];
    char subject[50];   
    float salary;
} t;

typedef struct staff{
    int staff_id;
    char name[50];
    float salary;
} st;

void print_student(s student) {
    printf("\nStudent Details:");
    printf("\n------------------");
    printf("\nRoll Number: %d", student.roll_number);
    printf("\nName: %s", student.name);
    printf("\nCourse: %s", student.course);
    printf("\nMarks: %.2f", student.marks);
    printf("\n======================================\n");
}
void print_teacher(t teacher) {
    printf("\nTeacher Details:");
    printf("\n------------------");
    printf("\nTeacher ID: %d", teacher.teacher_id);
    printf("\nName: %s", teacher.name);
    printf("\nSubject: %s", teacher.subject);
    printf("\nSalary: %.2f", teacher.salary);
    printf("\n======================================\n");
}

void print_staff(st staff) {
    printf("\nStaff Details:");
    printf("\n------------------");
    printf("\nStaff ID: %d", staff.staff_id);
    printf("\nName: %s", staff.name);
    printf("\nSalary: %.2f", staff.salary);
    printf("\n======================================\n");
}

int main() {
    int no_of_students, no_of_teachers, no_of_staff;
    
    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &no_of_students);
    s *students = (s *)malloc(no_of_students * sizeof(s));
    
    for(int i = 0; i < no_of_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Enter name: ");
        getchar(); // consume leftover newline from previous input
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';;
        printf("Enter course: ");
        scanf("%s", students[i].course);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
        
        print_student(students[i]);
    }
    
    // Input number of teachers
    printf("Enter the number of teachers: ");
    scanf("%d", &no_of_teachers);
    t *teachers = (t *)malloc(no_of_teachers * sizeof(t));
    
    for(int i = 0; i < no_of_teachers; i++) {
        printf("\nEnter details for teacher %d:\n", i + 1);
        printf("Enter teacher ID: ");
        scanf("%d", &teachers[i].teacher_id);
        printf("Enter name: ");
        getchar(); // consume leftover newline from previous input
        fgets(teachers[i].name, sizeof(teachers[i].name), stdin);
        teachers[i].name[strcspn(teachers[i].name, "\n")] = '\0'; 
        printf("Enter subject: ");
        scanf("%s", teachers[i].subject);
        printf("Enter salary: ");
        scanf("%f", &teachers[i].salary);
        
        print_teacher(teachers[i]);
    }
    
    // Input number of staff
    printf("Enter the number of staff members: ");
    scanf("%d", &no_of_staff);
    st *staff = (st *)malloc(no_of_staff * sizeof(st));
    
    for(int i = 0; i < no_of_staff; i++) {
        printf("\nEnter details for staff member %d:\n", i + 1);
        printf("Enter staff ID: ");
        scanf("%d", &staff[i].staff_id);
        printf("Enter name: ");
        getchar(); // consume leftover newline from previous input
        fgets(staff[i].name, sizeof(staff[i].name), stdin);
        staff[i].name[strcspn(staff[i].name, "\n")] = '\0'; // remove newline

        printf("Enter salary: ");
        scanf("%f", &staff[i].salary);
        
        print_staff(staff[i]);
    }
    
    // Free allocated memory

    free(students);
    free(teachers);
    free(staff);
    
    printf("\nAll records have been entered successfully.\n");
    printf("Thank you for using the college data entry system.\n");
    
    return 0;
}