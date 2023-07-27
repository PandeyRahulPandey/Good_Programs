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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the required sorted array is:\n");
    for (j=0;j<3;j++)
    {
        for (i=0;i<3;i++)
        {
            for (k=i+1;k<3;k++)
            {
                if (a[i][j]>a[k][j])
                {
                t=a[i][j];
                a[i][j]=a[k][j];
                a[k][j]=t;
                }
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