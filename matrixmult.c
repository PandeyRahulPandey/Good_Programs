#include<stdio.h>
void main()
{
int i,j,n,p,m,r,a[n][p],b[m][r],c[n][r],k,sum;
printf("enter the value of n,p,m,r");
scanf("%d%d%d%d",&n,&p,&m,&r);
printf("enter the elements of matrix:");
for (i=0;i<n;i++)
{
    for (j=0;j<p;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
printf("enter the elements of matrix:");
for (i=0;i<m;i++)
{
    for (j=0;j<r;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
if (p!=m)
printf("cant multiply:");
else 
for (i=0;i<n;i++)
{
    for (j=0;j<r;j++)
    {
        sum=0;
        for (k=0;k<n;k++)
        {
            sum=sum+a[i][k]*b[k][j];
        }
            c[i][j]=sum;
        
    }
}
printf("the required multiplied matrix is:");
for (i=0;i<n;i++)
{
    for (j=0;j<r;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}
