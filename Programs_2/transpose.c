#include<stdio.h>
int main(){
    int a[3][3],b[3][3];
printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            b[i][j]=a[j][i];
            printf("%d\n", b[i][j]);
        }
     
    }


    return 0;
}