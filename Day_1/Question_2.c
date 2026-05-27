//Q2 Write a program to Print multiplication table of a given number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number for which you want the multiplication table to be printed:- ");
    scanf("%d",&n);
    if(n>0)
    {
        printf("Multiplication Table of %d is:- \n",n); 
        for(int i=1;i<=10;i++)
        {
            printf("%d × %d = %d \n",n,i,n*i);
        }
    }
    else 
    {
        printf("Wrong input is provided.");
    }
    return 0; 
}