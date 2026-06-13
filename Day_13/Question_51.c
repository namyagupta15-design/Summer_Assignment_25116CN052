//Q51 Write a program to Find largest and smallest element.
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
    int large=arr[0],small=arr[0];
    for(int j=0;j<n;j++)
    {
        if(small>arr[j])
        {
            small=arr[j];
        }
        if(large<arr[j])
        {
            large=arr[j];
        }
    }
    printf("Largest element of the array is %d.\n",large);
    printf("Smallest element of the array is %d.\n",small);
    return 0;
}