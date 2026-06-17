#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("\nDatabase Full!\n");
        return;
    }

    printf("\nEnter Student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Age: ");
    scanf("%d", &students[count].age);

    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;

    printf("\nStudent Added Successfully!\n");
}

void displayStudents() {
    if (count == 0) {
        printf("\nNo Students Found!\n");
        return;
    }

    printf("\n===============================");
    printf("\nStudent Records");
    printf("\n===============================\n");

    for (int i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("ID    : %d\n", students[i].id);
        printf("Name  : %s\n", students[i].name);
        printf("Age   : %d\n", students[i].age);
        printf("Marks : %.2f\n", students[i].marks);
    }
}

void searchStudent() {
    int id;
    int found = 0;

    printf("\nEnter Student ID to Search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Found!\n");
            printf("ID    : %d\n", students[i].id);
            printf("Name  : %s\n", students[i].name);
            printf("Age   : %d\n", students[i].age);
            printf("Marks : %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

void updateStudent() {
    int id;
    int found = 0;

    printf("\nEnter Student ID to Update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {

            printf("\nEnter New Name: ");
            scanf(" %[^\n]", students[i].name);

            printf("Enter New Age: ");
            scanf("%d", &students[i].age);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("\nRecord Updated Successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

void deleteStudent() {
    int id;
    int found = 0;

    printf("\nEnter Student ID to Delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {

            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }

            count--;
            found = 1;

            printf("\nStudent Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("\nStudent Not Found!\n");
}

void sortStudents() {
    struct Student temp;

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {

            if (students[j].marks < students[j + 1].marks) {

                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("\nStudents Sorted by Marks (Descending).\n");
}

void calculateStatistics() {
    if (count == 0) {
        printf("\nNo Data Available!\n");
        return;
    }

    float total = 0;
    float highest = students[0].marks;
    float lowest = students[0].marks;

    for (int i = 0; i < count; i++) {

        total += students[i].marks;

        if (students[i].marks > highest)
            highest = students[i].marks;

        if (students[i].marks < lowest)
            lowest = students[i].marks;
    }

    printf("\n===== Statistics =====\n");
    printf("Total Students : %d\n", count);
    printf("Average Marks  : %.2f\n", total / count);
    printf("Highest Marks  : %.2f\n", highest);
    printf("Lowest Marks   : %.2f\n", lowest);
}

int main() {

    int choice;

    while (1) {

        printf("\n");
        printf("\n==================================");
        printf("\n STUDENT MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Sort Students by Marks");
        printf("\n7. Statistics");
        printf("\n8. Exit");
        printf("\n==================================");
        printf("\nEnter Choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                sortStudents();
                break;

            case 7:
                calculateStatistics();
                break;

            case 8:
                printf("\nThank You!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}