//Q3 Write a program to Find factorial of a number.
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter number for which you want to find out the factorial:- ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("Factorial of %d is %d.",n,fact);
    }
    else if(n>0)
    {  
        for(int i=1;i<=n;i++)
        {
            fact*=i;  
        }
        printf("Factorial of %d is %d.",n,fact);
    }
    else 
    {
    printf("Wrong input is provided.");
    }
    return 0; 
}