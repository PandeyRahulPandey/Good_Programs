#include<iostream>
using namespace std;
int main(){
int a[101],b[100],c[200],d[110],n;
cout <<"enter the size of the array:"<<endl;
cin>>n;
cout<<"enter the elements of the array:"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cout <<a[i]<<endl;
int r=0,m=0,s=0;
for(int i=0;i<n;i++){
    if (a[i]>0){
        b[r]=a[i];
        r++;
    }
    if(a[i]<0){
        c[m]=a[i];
        m++;
    }
    if (a[i]==0)
    d[s]=a[i];
    s++;
}
cout<<endl<<endl<<endl;

for(int i=0;i<r;i++){
    cout<<b[i]<<endl;
}
for(int i=0;i<m;i++){
    cout <<c[i]<<endl;
}
for(int i=0;i<s;i++){
    cout <<c[i]<<endl;
}
}
    
    
    
}
    
