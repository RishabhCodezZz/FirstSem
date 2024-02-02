#include<stdio.h>
int gcd(int a, int b){
    if(b==0){
        return  a;
    }
    else{
        return b , a%b;
    }
}
int main(){
    int a;
    a=gcd(3, 9);
    printf("%d",a);
    return 0;

}