#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
int x[100]={2,1,6,1,0,7};
for(int i=0;i<n;i++){
    if((i+1)<n)
    {
    if (x[i]>x[i+1]){
        int t=x[i];
        x[i]=x[i+1];
        x[i+1]=t;
        i=-1;
    }
    }
}
cout<<"the sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<x[i];
    }
}