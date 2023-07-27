#include<stdio.h>
void main()
{
    int i,j,n,sum=0,fact;
    printf("enter the number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=1;
        for (j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }
    printf("%d",sum);
}