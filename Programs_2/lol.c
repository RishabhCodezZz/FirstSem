#include <stdio.h>

int main() {
    FILE *f1;
    char ch;
    
    f1 = fopen("INPUT", "w");

    if (f1 == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the data to the INPUT file and press ctrl Z to stop\n");

    while ((ch = getchar()) != EOF) {
        putc(ch, f1);
    }

    fclose(f1);

    f1 = fopen("INPUT", "r");

    if (f1 == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit with an error code
    }

    while ((ch = getc(f1)) != EOF) {
        gets(ch);
    }

    fclose(f1);

    return 0; // Exit successfully
}
