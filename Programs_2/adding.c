#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("How many number of terms do you want: ");
    scanf("%d", &a);
    while(a!=0){
    printf("%d\n",a);
        b=a%10;//gives 123 %10= 3
        c=c+b;
        a=a/10;//123/10= 12
    }
    printf("%d",c);
    return 0;
}