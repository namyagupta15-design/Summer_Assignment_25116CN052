//Q52 Write a program to Count even and odd elements.
#include<stdio.h>
int main()
{ 
    int n,arr[50];
    int even=0,odd=0;
    printf("Enter number of elements in array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d of array:- ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    } 
    printf("There are %d even elements in the array.\n",even);
    printf("There are %d odd elements in the array.\n",odd);
    return 0;
}