#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int a = 3;
    int b = 4;

    printf("before swap %d , %d\n", a, b);
    swap(&a, &b); 

    printf("after swap %d , %d\n", a, b);
    return 0;
}
