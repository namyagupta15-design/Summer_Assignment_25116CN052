//Q6 Write a program to Reverse a number.
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
    printf("Reverse of %d is %d.",n,rev);
    return 0;
}