#include <stdio.h>
struct employee
{
    float salary;
    char name[200];
    int number;
};
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee no[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the id of employee %d: ", i + 1);
        scanf("%d", &no[i].number);
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", no[i].name);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &no[i].salary);
    }
    int a;
    printf("Enter the employee number you want to know: ");
    scanf("%d", &a);
    if (a >= 0 && a < n)
    {
        printf("Employee details:\n");
        printf("ID: %d\n", no[a].number);
        printf("Name: %s\n", no[a].name);
        printf("Salary: %f\n", no[a].salary);
    }
    else
    {
        printf("Invalid employee number\n");
    }
    return 0;
}