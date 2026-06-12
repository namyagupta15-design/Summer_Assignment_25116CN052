//Q47 Write a program to Write function for Fibonacci.
#include<stdio.h>
int fibonacci(int a)
{
    int x=0,y=1,z=0;
    for(int i=0;i<=a;i++)
    {
        z=x+y;
        printf("%d\n",x);
        x=y;
        y=z;
    } 
}
int main()
{ 
    int n;
    printf("Enter number of terms in Fibonacci series:- ");
    scanf("%d",&n);
    printf("Fibonacci series of %d terms is:-\n",n);
    fibonacci(n);
    return 0;
}