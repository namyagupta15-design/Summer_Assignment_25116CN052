//Q42 Write a program to Write function to find maximum.
#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{ 
    int x,y;
    printf("Enter number 1:- ");
    scanf("%d",&x);
    printf("\nEnter number 2:- ");
    scanf("%d",&y);
    printf("\nMaximum of both the numbers %d and %d = %d",x,y,max(x,y));
    return 0;
}