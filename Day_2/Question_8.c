//Q8 Write a program to Check whether a number is palindrome.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int rev=0;
    int x=n;
    while(x!=0)
    {
        int d=x%10;
        rev=rev*10+d;
        x=x/10;
    }
    if(n==rev)
    {
        printf("%d is a palindrome number.",n);
    }
    else
    {
        printf("%d is not a palindrome number.",n);
    }  
    return 0;
}