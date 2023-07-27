#include<iostream>
using namespace std;
int isEven(int);
int main(){
  int a;
  cout <<"enter the value of a:"<<endl;
  cin>>a;
  if(isEven(a))
  cout<<"the number is even"<<endl;
  else
    cout <<"the number is odd:"<<endl;
}
int isEven(int x){
  if(x&1)
    return 0;
  else
    return 1;
}