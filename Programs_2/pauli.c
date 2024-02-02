#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("How many number of terms do you want: ");

    scanf("%d", &a);
    int org = a;
    while (a != 0)
    {
        b = a % 10;
        c = c  + (b*b*b) ;
        a = a / 10;
    }
    printf("%d\n", c);
    if (c == org)
    {
        printf("Its a armstrong");
    }
    else
    {
        printf("its not ");
    }

    return 0;
}