#include <iostream>
using namespace std;

int main(){
  int a, n;
  cin >> n >> a;
  int sum = n / 10 + n % 10;
  if (sum >= 10){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  if (sum > a){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
