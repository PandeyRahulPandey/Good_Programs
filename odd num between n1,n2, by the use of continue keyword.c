#include<stdio.h>
void main()
{
    int n1,n2,i;
    printf("enter the value of n1,n2:");
    scanf("%d%d",&n1,&n2);
    for (i=n1;i<=n2;i++)
    {
        if (i%2==0)
        continue;
        else
        printf("%d",i);

    }
}