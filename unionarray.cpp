#include<iostream>
using namespace std;
//program to find union of two arrays.
int main(){
    int a[100]={1,2,4,5,9},b[100]={2,4,8,3},c[200];
    int n1,n2;
    cout<<"enter the value of n1 and n2:"<<endl;
    cin>>n1>>n2;
    cout<<endl<<endl;
    int p=n1+n2;
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    int f=0;
    for(int j=n1;j<n1+n2;j++){
        c[j]=b[f];
        f++;
    }
    for(int i=0;i<n1+n2;i++){
        cout<<c[i]<<" "<<endl;
    }
    cout<<endl<<endl<<endl;
     for (int i=0;i<p;i++)
    {
        for (int j=i+1;j<p;)
        {
            if (c[j]==c[i])
            {
                for (int r=j;r<p;r++)
                {
                    c[r]=c[r+1];
                }
                 p--;
            }
            
        else 
        j++;
        }
    }
    for (int i=0;i<p;i++)
    {
        cout<<c[i];
    }

}