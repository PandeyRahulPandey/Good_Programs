#include<stdio.h>
void main()
{
    int a[10][10],i,j,row,col,r,c,isupper;
    printf("enter the number of rows:");
    scanf("%d",&r);
    printf("enter the number of column:");
    scanf("%d",&c);
    printf("enter the elements of matrix:");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    isupper=1;
    for (row=0;row<r;row++)
    {
        for (col=0;col<c;col++)
        {
            if (row>col && a[row][col]!=0)
            {
                isupper=0;
            }
        }
    }
    if (isupper==1)
    printf("the matrix is upper triangular:\n");
    else
    printf("the matrix is not upper triangular:");
}
  