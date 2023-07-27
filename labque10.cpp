#include<iostream>
using namespace std;
//program to find fourth non repeating element in a given array.
int main(){
    int arr[100]={1,8,3,5,1,2,3,14,2,13,6,7,9,2};
    int size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int count,i,j,t;
int k=0;
for (i=0;i<size;)
{
    count=0;
    //deleting the repeating element.
    for (j=i+1;j<size;)
    {
        
        if (j<size){
        if (arr[i]==arr[j])
        {
            count++;
            for(int r=j;r<size;r++){
                arr[r]=arr[r+1];
            }
            size--;
        }
        else
        j++;
    }
    }
    if (count>0){
    for(int s=i;s<size;s++){
        arr[s]=arr[s+1];
    }
    size--;
    }
    else
    i++;
}
cout<<endl<<endl<<endl;
for(int i=0;i<size;i++){
    cout<<arr[i]<<" "<<endl;
}
cout<<endl<<endl<<endl;
cout<<"the fourth non repeating element is:"<<arr[3]<<endl;
}