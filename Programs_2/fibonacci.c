#include <stdio.h>
int main()
{
    int n;
    printf("How many number of terms do you want: ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;
    int total;
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a);
        total = a + b;
        a = b;
        b = total;
    }
    return 0;
}