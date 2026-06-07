//Q28 Write a program to Recursive reverse number.
#include <stdio.h>
int ReverseNumber(int n)
{
    static int rev=0;
    if(n==0)
    {
        return rev;
    }
    else
    {
        rev=(rev*10)+(n%10);
        return ReverseNumber(n/10);
    }
}
int main() 
{
    int num,result;
    printf("Enter an integer:- ");
    scanf("%d",&num); 
    result=ReverseNumber(num);
    printf("Reversed number:- %d\n",result); 
    return 0;
}