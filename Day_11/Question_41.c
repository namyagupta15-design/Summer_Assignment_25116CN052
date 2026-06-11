//Q41 Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{ 
    int x,y;
    printf("Enter number 1:- ");
    scanf("%d",&x);
    printf("\nEnter number 2:- ");
    scanf("%d",&y);
    printf("\nSum of both the numbers = %d+%d = %d",x,y,sum(x,y));
    return 0;
}