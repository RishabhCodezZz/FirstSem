#include<stdio.h>
int main(){
    int n,a=0,b=1,sum=0;
    printf("How many number of terms should be printed: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d \n",a);
        sum=a+b;
        a=b;
        b=sum;

        
    }
return 0;
}