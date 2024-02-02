#include<stdio.h>
int main(){
    FILE *ptr;
    int ok=5;
    ptr=fopen("bus.txt","w");
    fscanf(ptr,"%d",&ok);
    printf("%d", ok);

    
}