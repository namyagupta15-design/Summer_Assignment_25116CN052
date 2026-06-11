//Q43 Write a program to Write function to check prime.
#include<stdio.h>
int prime(int a)
{
    int flag=0;
    if(a<=1)
    {
        flag=1;
    }
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            flag+=1;
            break;
        }
    }
    return flag;
}
int main()
{ 
    int x;
    printf("Enter a number:- ");
    scanf("%d",&x);
    if(prime(x)==0)
    {
        printf("%d is a prime number.",x);
    }
    else
    {
        printf("%d is not a prime number.",x);
    } 
    return 0;
}