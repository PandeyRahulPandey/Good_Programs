#include<iostream>
using namespace std;
//program to print maximum and minimum of an array.
int getMax(int a[],int n){
    int max=INT_MIN;//minimum range of integer.
    for(int i=0;i<n;i++){
        if (a[i]>max)
        max=a[i];
    }
    return max;
}
int getMin(int a[],int n){
    int min=INT_MAX;//maximum range of integer.
    for(int i=0;i<n;i++){
        if (a[i]<min)
        min=a[i];
    }
    return min;
}
int main(){
    int arr[100],size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout <<"the maximum element is:"<<getMax(arr,size)<<endl;//function call.
    cout <<"the minumum element is:"<<getMin(arr,size)<<endl;//function call.
}
