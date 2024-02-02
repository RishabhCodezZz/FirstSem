#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("idk.txt", "r");
    char acha;
    fscanf(ptr, "%s", &acha);
    printf("%s", acha);
    return 0;
}