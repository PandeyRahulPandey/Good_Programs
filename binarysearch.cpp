#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int  key){
     int start=0,end=size-1;
     int mid=start+(end-start)/2; // end-start done to avoid going out of range of integer.Because subtraction will result in a smaller value.
     while(start<=end){
        if (arr[mid]==key)
        return mid;
        if(key>arr[mid]) //focus here, you have done mistake here once.
        start =mid+1;
        else
        end =mid-1;
        mid=start+(end-start)/2;
     }
     return -1;
}
int main(){
    int a[200]={1,2,3,3,2,4,4,5,6};
    int b[200]={4,5,6,8,7};
    int key;
    cout<<"enter the element to search:"<<endl;
    cin>>key;
    int evenIndex=binarySearch(a,6,key);
    cout <<"the index of element key is:"<<evenIndex<<endl;
}


