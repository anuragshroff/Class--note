#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll_no;
    char stream[50];
    float marks;
};

int main(void)
{
    struct Student student;

    printf("Enter name: ");
    if (scanf(" %99[^\n]", student.name) != 1) return 1;
    printf("Enter roll number: ");
    if (scanf("%d", &student.roll_no) != 1) return 1;
    printf("Enter stream: ");
    if (scanf(" %49[^\n]", student.stream) != 1) return 1;
    printf("Enter marks: ");
    if (scanf("%f", &student.marks) != 1) return 1;

    printf("\nStudent details\nName: %s\nRoll number: %d\nStream: %s\nMarks: %.2f\n",
           student.name, student.roll_no, student.stream, student.marks);
    return 0;
}
