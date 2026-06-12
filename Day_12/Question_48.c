//Q48 Write a program to Write function for perfect number.
#include<stdio.h>
int perfect(int a)
{
    int sum=0;
    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(a==sum)
    {
        printf("%d is a Perfect number.",a);
    }
    else
    {
        printf("%d is not a Perfect number.",a);
    }
}
int main()
{ 
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative numbers are not perfect numbers.");
    }
    else if(n==0)
    {
        printf("%d is not a perfect number.",n);
    }
    else
    {
        perfect(n);
    } 
    return 0;
}