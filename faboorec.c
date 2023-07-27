#include<stdio.h>
int fabo(int);
int main()
{
    int n,i,count=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d\n",fabo(count));
        count++;
    }
    return 0;
}
int fabo(int x)
{
    if (x==0||x==1)
    return x;
    else 
    return (fabo(x-1)+fabo(x-2));
}