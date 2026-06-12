//Q45 Write a program to Write function for palindrome.
#include<stdio.h>
int palindrome(int a)
{
    int rev=0;
    int x=a;
    while(x!=0)
    {
        int d=x%10;
        rev=rev*10+d;
        x=x/10;
    }
    if(a==rev)
    {
        printf("%d is a Palindrome number.",a);
    }
    else
    {
        printf("%d is not a Palindrome number.",a);
    }
}
int main()
{ 
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}