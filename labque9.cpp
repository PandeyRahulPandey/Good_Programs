#include<iostream>
using namespace std;
int main(){
    int a[100]={1,8,3,5,1,2,3,14,2,13,6,7,9,2};
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int count=0,k;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (a[i]!=a[j]&&count<4){
             k=i;
            count++;
            }
            else
            break;
        }
        if (count==4)
        cout<<a[k];
    }
}