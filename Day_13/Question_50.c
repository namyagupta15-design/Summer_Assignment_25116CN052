//Q50 Write a program to Find sum and average of array.
#include<stdio.h>
int main()
{ 
    int n,arr[50];
    int sum=0,avg=0;
    printf("Enter number of elements in array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d of array:- ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("The sum of the elements of the array is %d.\n",sum);
    printf("The average of the elements of the array is %d.\n",avg);
    return 0;
}