#include<stdio.h>
void main()
{
    int a[50],n,i,j,r;
    printf("how many elements you want to input:");
    scanf("%d",&n);
    printf("enter the elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {    
        for (j=i+1;j<n;)
        {
            if (a[j]==a[i])
            {
                for (r=j;r<n;r++)
                {
                    a[r]=a[r+1];
                }
                n--;
            }
            
        else 
        j++;
        }
    }
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
printf("Rahul Pandey,sectionN,Roll No49");
}
