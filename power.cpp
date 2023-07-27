#include <iostream>
using namespace std;
int power();
int main() {
  int ans = power();
  cout << "the answer is:" << ans << endl;
}
int power() {
  int a, b;
  cout << "enter the value of a and b:" << endl;
  cin >> a >> b;
  int ans = 1;
  for (int i = 0; i < b; i++) {
    ans = ans * a;
  }
  return ans;
}
