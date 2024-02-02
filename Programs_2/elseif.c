#include<stdio.h>
int main(){
    int n;
    printf("Whats the number: ");
    scanf("%d",&n);
    if(n==0){
        printf("Its zero");
    }
    else if(n==1){
        printf("Its one");

    }
    else{
        printf("Its not a binary number that a computer can read");
    }
    return 0;
}