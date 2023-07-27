#include<iostream>
using namespace std;
int main(){
    int n;
        int count=0;
        cout<<"enter the value of n:"<<endl;
        cin>>n;
        while ( n>=-231&&n <= 231 - 1)

        {
            if(n%2==0)
                n=n/2;
            else
                count++;
        }
        if (count==0)
            cout<<"true"<<endl;
        else
            cout<< "false"<<endl;
    }

