#include<stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    { // 5
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int strong(int n){
 int OriginalNum=n;
    while(n!=0){
        int remainder=n%10;
        int digit=digit+(remainder*remainder*remainder);
        n=n/10;

    } }
