#include<stdio.h>
void main()
{
int i,j,n,p,m,r,a[3][3],b[3][3],c[3][3],k,sum;

printf("enter the elements of matrix:");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the elements of matrix:");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
printf("the matrix is:\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");

}
printf("the matrix is:\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
       printf("%d\t",b[i][j]);
    }
    printf("\n");
}
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        sum=0;
        for (k=0;k<3;k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
            c[i][j]=sum;
        
    }
}
printf("the required multiplied matrix is:\n");
for (i=0;i<3;i++)
{
    for (j=0;j<3;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}
