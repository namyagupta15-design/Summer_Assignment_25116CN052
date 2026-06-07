//Q27 Write a program to Recursive sum of digits.
#include <stdio.h>
int SumOfDigits(int n) 
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10)+SumOfDigits(n / 10);
    }
}
int main() 
{
    int num;
    printf("Enter an integer:- ");
    scanf("%d",&num);
    if(num<0)
    {
        num=-num; 
    } 
    printf("Sum of digits:- %d\n", SumOfDigits(num));  
    return 0;
}