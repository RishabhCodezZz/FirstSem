#include<stdio.h>
#include<string.h>
int main(){
    char pass[200];
    char salt[]="123";
    printf("Enter the password: ");
    scanf("%s",pass);
    strcat(pass,salt);
    
    printf("Your company passowrd is : %s",pass);

    return 0;
}