#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,k,i,j;
    printf("enter the value of n:");
    scanf("%d",&n);
    p=(int *) malloc (n*sizeof (int ));
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("enter the value of k:");

    scanf("%d",&k);
    for(int i=0;i<k;i++){
        for(int j=n;j>=0;j--){
            *(p+j+1)=*(p+j);
        }
        *p=*(p+n);
    }
    for(int i=0;i<n;i++){
        printf("%d",*(p+i));
    }
}
