#include<iostream>
using namespace std;
int main(){
    int arr1[100],arr2[100],i,j,n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    while (i<n&&j<m){
        if (arr1[i]==arr2[j]){
            cout<<arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        i++;
        else 
        j++;
    }
}