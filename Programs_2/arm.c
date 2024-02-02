#include<stdio.h>
int main(){
    int n,remainder,digit=0,OriginalNum;
    printf("Whats the number you want: ");
    scanf("%d", &n);
    OriginalNum=n;
    while(n!=0){
        remainder=n%10;
        digit=digit+(remainder*remainder*remainder);
        n=n/10;

    }
    if(OriginalNum==digit){
        printf("Its an armstrong number");
    }
    else{
        printf("Its not");
    }
    return 0;
}