#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],i,j,n,n1,n2,k,t;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    k=n;
    
    printf("how many elements you want to input:");
    scanf("%d",&n1);
    printf("enter the elements of array:");
    for (i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    n2=n+n1;
    printf("the required merged array is:");
    for (i=0;i<n2;i++)
    {
        printf("%d",c[i]);
    }

printf("\nthe required sorted array is:");
for (i=0;i<n2;i++)
{
    for (j=i+1;j<n2;j++)
    {
        if (c[i]<c[j])
        {
            t=c[i];
            c[i]=c[j];
            c[j]=t;
        }
    }
}
for (i=0;i<n2;i++)
{
    printf("%d",c[i]);
}
}