#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    { // 5
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    printf("Whats the factorial you want: ");
    scanf("%d", &n);
    int result;
    result = factorial(n);
    printf("Factorial is:  %d ", result);
    return 0;
}
