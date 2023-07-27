#include<iostream>
using namespace std;
int main()
{
  int a,b;
  char op;
  cout<<"enter the value of a,b:"<<endl;
  cin>>a>>b;
  cout <<"enter the operation to be performed:"<<endl;
  cin>>op;
  switch(op)
    {
      case '+': cout <<(a+b); break;
      case '-': cout <<(a-b); break;
      case '*': cout <<(a*b); break;
      case '/': cout <<(a/b); break;
      case '%': cout <<(a%b); break;
      default :
        cout <<"please enter a write input :"<<endl;
    }
}