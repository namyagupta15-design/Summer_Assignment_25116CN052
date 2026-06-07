//Q25 Write a program to Recursive factorial.

#include <stdio.h>
int fact(int n) 
{
    if((n==0)||(n==1)) 
    {
        return 1;
    } 
    else
    {
        return n*factorial(n-1);
    }
}
int main() 
{
    int n;
    printf("Enter a positive integer:- ");
    scanf("%d",&n); 
    if(num<0) 
    {
        printf("Factorial of negative numbers doesn't exist.\n");
    } 
    else 
    {
        printf("Factorial of %d is %d\n",n,fact(n));
    } 
    return 0;
}