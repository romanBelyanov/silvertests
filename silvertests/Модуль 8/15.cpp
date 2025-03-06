#include <iostream>
using namespace std;
int main() {
  double n;
  cin >> n;
  if (n > -n) {
    cout << n;
  }
  if (-n > n) {
    cout << -n;
  }
  return 0;
} 
