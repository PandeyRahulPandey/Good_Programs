//program to find intersection of two array.
//not correct code. Will fail in test case,11234 and 11223344.
#include<iostream>
using namespace std;
int main(){
    int arr1[100],arr2[200],i,j;
    int n,m;
    cout<<"enter the value of n and m:"<<endl;
    cin>>n>>m;
    cout<<"enter the elements of the first array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter the elements of the second array:"<<endl;
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    for(int i=0;i<n;i++){
        int k=arr1[i];
        for(int j=0;j<m;j++){
            if(k==arr2[j]){
                cout<<arr1[i];
                arr2[j]=-4;
                break;
            }
        }
    }
}