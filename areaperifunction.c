//wap to pass a no. into a function.Consider this no. as a side of a square and radius of a circle. Function will return area and perimeter of square and circle.//
#include<stdio.h>
void result(int,int*,int*,int*,int*);
void main()
{
    int n,as,ac,pc,ps;
    printf("enter the value of n:");
    scanf("%d",&n);
    result(n,&as,&ac,&pc,&ps);
    printf("%d\n%d\n%d\n%d\n",as,ac,pc,ps);
}
void result(int r,int*p,int*q,int*t,int*m)
{
  *p=r*r;
  *q=3.14*r*r;
  *t=2*3.14*r;
  *m=4*r;
  //printf("%d\n%d\n%d\n%d\n",*p,*q,*t,*m);-same output will come.
}
