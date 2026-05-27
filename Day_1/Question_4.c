//Q4 Write a program to Count digits in a number.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter number for which you want to count the number of digits:- ");
    scanf("%d",&n);
    int x=n;
    while(x!=0)
    {
        x=x/10;
        count+=1;
    }
    printf("The number %d has %d digits.",n,count);
    return 0;
}