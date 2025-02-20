#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  a = a * 45 + (a/2)*5 + ((a+1)/2-1)*15;
  cout << a/60 + 9 << " " << a%60;
  return 0;
}
