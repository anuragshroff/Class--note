#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[100];
    char department[60];
    double salary;
};

int main(void)
{
    int count;
    printf("Number of employees (1-100): ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 100) {
        fprintf(stderr, "Invalid employee count.\n");
        return 1;
    }

    struct Employee *employees = malloc((size_t)count * sizeof *employees);
    if (employees == NULL) {
        perror("Could not allocate employee records");
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        printf("\nEmployee %d\nID: ", i + 1);
        if (scanf("%d", &employees[i].id) != 1) goto input_error;
        printf("Name: ");
        if (scanf(" %99[^\n]", employees[i].name) != 1) goto input_error;
        printf("Department: ");
        if (scanf(" %59[^\n]", employees[i].department) != 1) goto input_error;
        printf("Salary: ");
        if (scanf("%lf", &employees[i].salary) != 1) goto input_error;
    }

    puts("\nEmployee records");
    for (int i = 0; i < count; ++i) {
        printf("ID: %d | Name: %s | Department: %s | Salary: %.2f\n",
               employees[i].id, employees[i].name,
               employees[i].department, employees[i].salary);
    }
    free(employees);
    return 0;

input_error:
    fprintf(stderr, "Invalid input.\n");
    free(employees);
    return 1;
}
