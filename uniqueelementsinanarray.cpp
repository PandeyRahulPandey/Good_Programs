#include<iostream>
using namespace std;
int main(){
int arr[100]={1,2,1,4,5,3,2};
int n,k;
cout <<"enter the value of n:"<<endl;
cin>>n;
int s=0;
for(int i=0;i<n;){//how to increment i? After each iteration i should be initialized with 0.
    for (int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
           k=i;
           for (int r=j;r<n;r++){
            arr[r]=arr[r+1];
           }
        n--;
        
    
    for(int m=k;m<n;m++){
        arr[m]=arr[m+1];
    }
    n--;
        }
    }
}
//how to stop the outermost loop when there are only unique elements left?
for (int t=0;t<n;t++){
    cout <<arr[t]<<endl;
}
}