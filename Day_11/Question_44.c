//Q44 Write a program to Write function to find factorial.
#include<stdio.h>
int fact(int a)
{
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{ 
    int x;
    printf("Enter a number:- ");
    scanf("%d",&x);
    printf("Factorial of %d is %d.",x,fact(x));
    return 0;
}