#include<iostream>
using namespace std;
int main(){
    int a[100]={-1,2,-4,-3,5,6,7,-10,-9,33},b[100],c[100],d[100];
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int r=0,s=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
        b[r]=a[i];
        r++;
        }
        else{
        c[s]=a[i];
        s++;
        }
    }
    for(int i=0;i<r;i++)
    {
        d[i]=b[i];
    }
    for(int i=0;i<r;i++){
        cout<<d[i];
    }
    cout<<endl<<endl;
    int t=0;
    for(int j=r;j<r+s;j++){
        d[j]=c[t];
        t++;
    }
    for(int i=0;i<n;i++){
        cout<<d[i]<<" "<<endl;
    }
} 