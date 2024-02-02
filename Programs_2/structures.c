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
    struct employee no[n];
    int a;
    printf("Whats the number of employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("The id of employee %d: ", i+1);
        scanf("%d", &no[i].number);
        printf("The name of employee %d: ", i+1);
        scanf("%s", &no[i].name);
        printf("The salary of employee %d: ", i+1);
        scanf("%f", &no[i].salary);
    }
   
    return 0;
}