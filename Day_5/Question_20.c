//Q20 Write a program to Find largest prime factor. 
#include<stdio.h>
int main()
{
    int n,pf;
    printf("Enter a number:- ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            int flag=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    flag+=1;
                    break;
                }
            }
            if(flag==0)
            {
                pf=i;
            }
        }
    }
    printf("Largest prime factor of %d is %d.",n,pf);
    return 0;
}