#include<stdio.h>
int main(){
    char hello[]="string";
    char *ptr=hello;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}