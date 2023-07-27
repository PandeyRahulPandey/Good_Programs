#include<stdio.h>
void main()
{
    int n,r,f,sum=0,i,t;
    printf("enter the number:");
    scanf("%d",&n);
    t=n;
    while (t!=0)
    {
        r=t%10;
        f=1;
        for (i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        t=t/10;    
    }    
       if (n==sum)
       printf("strong");
       else 
       printf("not strong");
}
