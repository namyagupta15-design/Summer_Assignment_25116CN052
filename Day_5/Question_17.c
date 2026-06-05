//Q17 Write a program to Check perfect number.
#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if(sum==n)
        {
            printf("%d is a perfect number.",n);
        }
        else
        {
            printf("%d is not a perfect number.",n);
        }
    }
    else
    {
        printf("Invalid input is entered.");
    }
    return 0;
}