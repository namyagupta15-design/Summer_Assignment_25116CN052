Q7 Write a program to Find product of digits.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int product=1;
    int x=n;
    while(x!=0)
    {
        int d=x%10;
        product*=d;
        x=x/10;
    }
    printf("Product of the digits of %d is %d.",n,product);
    return 0;
}