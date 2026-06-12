//Q46 Write a program to Write function for Armstrong.
#include<stdio.h>
#include<math.h>
int armstrong(int a)
{
    int x=a,count=0;
    while(x!=0)
    {
        x=x/10;
        count+=1;
    }
    int y=a,sum=0;
    while(y!=0)
    {
        int d=y%10;
        sum+=pow(d,count); 
        y=y/10;
    }
    if(a==sum)
    {
        printf("%d is an Armstrong number.",a);
    }
    else
    {
        printf("%d is not an Armstrong number.",a);
    }
}
int main()
{ 
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative numbers are not Armstrong numbers.");
    }
    else
    {
        armstrong(n);
    }
    return 0;
}