#include <iostream>
#include<math.h>
using namespace std;
int main() {
  int n,ans=0,i=0;
  float digit;
  cout<<"enter the value of n:"<<endl;
  cin>>n;
  while(n!=0)
    {
      digit=n%10;
      if (digit==1)
      {
        ans=ans+pow(2,i);
      }
      n=n>>1;
        i++;
    }
  cout<<ans<<endl;
  return 0;
  }