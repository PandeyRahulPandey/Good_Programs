#include<iostream>
using namespace std;
int main(){
    int arr[100]={6,3,1,5,4,3,2};
    int size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int count,i,j,t;
   for (i=0;i<size;i++)
{
    for (j=i+1;j<size;j++)
    {
        if (arr[i]>arr[j])
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
}
for (i=0;i<size;i=i+count)
{
    count=1;
    for (j=i+1;j<size;j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
        
    }
    if (count>1)
    //for finding unique elements put if(count<=1).
    cout<<arr[i]<<endl;
}
}