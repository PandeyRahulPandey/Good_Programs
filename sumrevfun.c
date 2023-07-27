#include<stdio.h>
void find(int,int*,int*);
void main(){
    int n,s=0,rev=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    find (n,&s,&rev);
}
void find (int num,int *p,int *q)
{
int t=num;
while (num!=0)
{
    *p=*p+num%10;
    num=num/10;
}
while (t!=0)
{
    *q=(*q)*10+t%10;
    t=t/10;
}
printf("%d\n%d\n",*p,*q);
}
