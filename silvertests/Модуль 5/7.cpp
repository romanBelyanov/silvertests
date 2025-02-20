#include <iostream>
using namespace std;

int main(){
  int n, cnt = 0, num1, num2, num3;
  cin >> n;
  num1 = n % 10;
  num2 = (n / 10) % 10;
  num3 = n / 100;
  cnt = cnt + num1 + num2 + num3;
  cout << cnt << " " << num3 << num1 << num2;
  return 0;
}
