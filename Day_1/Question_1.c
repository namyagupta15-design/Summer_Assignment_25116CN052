//Q1 Write a program to Calculate sum of first N natural numbers.
#include<stdio.h>
int main(){
  int n,sum=0;
    printf("Enter natural number till which you want the sum:- ");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            sum+=n;
        }
        printf("Sum of the first %d natural numbers id %d.",n,sum);
    }
    else 
    {
        printf("Wrong input is provided.");
    }
    return 0; 
}