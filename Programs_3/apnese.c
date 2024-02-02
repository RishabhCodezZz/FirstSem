#include <stdio.h>
#include <string.h>
int main()
{
    char hi[100];
    printf("enter the string: ");
    scanf("%s", hi);
    for (int start = 0, end = strlen(hi) - 1; start < end; start++, end--)
    {
        char temp = hi[start];
        hi[start]=hi[end];
        hi[end]=temp;
        
    }
    printf("Reversed string: %s ", hi);
    return 0;
}