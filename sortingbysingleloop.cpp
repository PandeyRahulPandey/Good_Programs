#include<iostream>
using namespace std;
int main(){
int j = 0;
int prevI = 0;
int n;
cout<<"enter the value of n:"<<endl;
cin>>n;
int x[100]={2,4,6,1,0,7};
   for(int i=0; i<n-1; i++)  
    {
        j++;
        if( j < n)
        {               
            i = prevI;
        }
        else
        {
            j = i + 1;
        }
         
        if(x[i] < x[j])  
        {  
            int temp = x[i]; 
            x[i] = x[j]; 
            x[j] = temp;
        }           
        prevI = i;
         
    }
    cout<<"the sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<x[i];
    }
}