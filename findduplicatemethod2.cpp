#include<iostream>
using namespace std;
int main(){
int arr[100]={1,2,3,1,4};
//this method need some corrections. see the dry run of unique element vala que solved by love babbar.
  int ans=0,n;
  cout<<"enter the value of n:"<<endl;
  cin>>n;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        if(ans==0)
            cout<<arr[i];
    }
}