/*Q40 Write a program to Print character pyramid.
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA */
#include<stdio.h>
int main()
{ 
    for(int i=1;i<=5;i++)
    { 
        int a=65;
        for(int j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c",a);
            a+=1;
        }
        a-=2;
        for(int l=i-1;l>=1;l--)
        {
            printf("%c",a);
            a-=1;
        }
        printf("\n");
    }
    return 0;
}