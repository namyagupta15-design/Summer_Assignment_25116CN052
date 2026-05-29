//Q5 Write a program to Find sum of digits of a number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int sum=0;
    int x=n;
    while(x!=0)
    {
        int d=x%10;
        sum+=d;
        x=x/10;
    }
    printf("Sum of the digits of %d is %d.",n,sum);
    return 0;
}