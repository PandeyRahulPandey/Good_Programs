#include<iostream>
using namespace std;
//this is correct program.
//both the given arrays should be sorted.
int main(){
    int arr1[100],arr2[100],i,j,n,m;
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
    int r=0,s=0;
    while (r<n&&s<m){
        if (arr1[r]==arr2[s]){
            cout<<arr1[r]<<endl;
            r++;
            s++;
        }
        else if(arr1[r]<arr2[s])
        r++;
        else 
        s++;
    }
}