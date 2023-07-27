#include<iostream>
using namespace std;
int main(){
    int arr[110],n;
    cout <<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[minIndex])
            minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }
}