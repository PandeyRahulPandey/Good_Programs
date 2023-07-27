//program to find duplicate elements of an array
#include<iostream>
using namespace std;
int main(){
int arr[100]={1,2};
int ab[100];
int count,i,j,n,t;
cout<<"enter the value of n:"<<endl;
cin>>n;
// sorting the array.
for (i=0;i<n;i++)
{
    for (j=i+1;j<n;j++)
    {
        if (arr[i]>arr[j])
        {
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
}
int r=0;
// finding frequency of each element of the array.
for (i=0;i<n;i=i+count)
{
    count=1;
    for (j=i+1;j<n;j++)
    {
        if (arr[i]==arr[j])
        {
            count++;
        }
        
    }
    ab[r]=count;
    r++;
    if (count>1)
    //for finding unique elements put if(count<=1).
    cout<<arr[i]<<" "<<endl;
}
int flag=0;
    for(int i=0;i<r;i++)
   {
       if (i+1<r){
       for(int j=i+1;j<=r;j++){
    if(ab[i]==ab[j]){
    flag++;
    break;
    }
   }
       }
       else
       break;
   }
   if (flag==0)
   cout<<"true"<<endl;
   else 
   cout<<"false"<<endl;
}        
    
