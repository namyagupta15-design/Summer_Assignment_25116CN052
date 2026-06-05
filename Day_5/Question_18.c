//Q18 Write a program to Check strong number.
#include<stdio.h>
int fact(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}  
int main()
{
    int n,sum=0;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int y=n;
    if(n==0)
    {
        printf("%d is not a strong number.",n);
    }
    else if(n>0)
    {
        while(y!=0)
        {
            int d=y%10;
            sum+=fact(d);
            y=y/10;
        }
        if(sum==n)
        {
            printf("%d is a strong number.",n);
        }
        else
        {
            printf("%d is not a strong number.",n);
        }
    }
    else
    {
        printf("Invalid input is entered.");
    }
    return 0;
}