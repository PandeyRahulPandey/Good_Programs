#include<stdio.h>
void main()
{
    int a[100],i,j,n;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]==a[i+1])
        {
            for (j=i+1;j<n;j++)
            {
                a[j]=a[j+1];
            }
            n--;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}