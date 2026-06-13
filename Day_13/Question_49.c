//Q49 Write a program to Input and display array.
#include<stdio.h>
int main()
{ 
    int n,arr[50];
    printf("Enter number of elements in array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d of array:- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are:-\n");
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}