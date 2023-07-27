#include<stdio.h>
void main()
{
    int a[3][3],i,j,k,t;
    printf("enter the elements of array:");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
    printf("the required sorted array is:");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=j+1;k<3;k++)
            {
                if (a[j]<a[k])
                t=a[j];
                a[j]=a[k];
                a[k]=t;
            }
        
        }
        
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}