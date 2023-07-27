#include<stdio.h>
int strong(int);
int factorial(int);
void main()
{
    int num,sum;
    printf("enter the number");
    scanf("%d",&num);
    sum=strong(num);
    if (num==sum)
    printf("strong");
    else 
    printf("not strong");

}
int strong(int n )
{
    int s=0,r;
    while (n>0)
    {
        r=n%10;
        s=s+factorial(r);
        n=n/10;
    }
    return s;
}
int factorial(int x)
{
    int f=1,i;
    for (i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}


