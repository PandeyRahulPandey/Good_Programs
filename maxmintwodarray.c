#include<stdio.h>
void main()
{
    int a[2][3],i,j,max,min;
    printf("enter the elements of array:");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0],min=a[0][0];
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            if (a[i][j]>max)
            max=a[i][j];
            if (a[i][j]<min)
            min=a[i][j];
        }
    }
    printf("the largest element of matrix is:%d\n",max);
    printf("the smallest element of matrix is:%d\n",min);
}


