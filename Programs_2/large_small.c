#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int small,large;
    small=arr[0];
    large=arr[0];
    for(int i=1;i<5;i++ ){
        if(large<arr[i]){
            large=arr[i];
                    if(small>arr[i]){
            small=arr[i];
        }
    }
    
}
printf("%d %d",small , large);}