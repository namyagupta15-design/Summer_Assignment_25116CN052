/*Q38 Write a program to Print reverse pyramid.
*********
 *******
  *****
   ***
    * */
#include<stdio.h>
int main()
{ 
    for(int i=5;i>=1;i--)
    {  
        for(int j=5-i;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=2*i-1;k>=1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}