#include <stdio.h>
int main()
{
    int n;
    int first ;
    int reversed = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int original=n;
    while (n > 0)
    {
        first = n % 10;
        reversed = reversed * 10 + first;
        n = n / 10;
    }
    if (reversed == original)
    {
        printf("Its a palindrome");
    }
    else
    {
        printf("Its not a palindrome");
    }
    return 0;
}