#include<iostream>
	using namespace std;
    int main(){        
        int arr[100]={11,2,3,4,5,6,6,7};
 
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j])
        {
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }}
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (arr[i]==arr[j])
        {
            for(int r=j;r<n;r++){
            arr[r]=arr[r+1];
            }
            size--;
        }
    }
    }
    int count=0;
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (arr[i]+arr[j]==s)
        {
          count++;
        }
        
    }
 }
   cout<<count<<endl;
 }


 

}