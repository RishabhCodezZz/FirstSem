#include <stdio.h>
int main()
{
    int n;
    printf("How many number of terms should be printed: ");
    scanf("%d", &n);
 int org=n;
 int a=0,b;
 while (n!=0)

 {
  b= n%10;
  a=a*10+b;
  n=n/10;
    
 }
 if (a== org){
    printf("Its a palindrome");

 }
 else{
    printf("Its just a number");
 }
 
    return 0;
}