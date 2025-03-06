#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, cnt;
  cin >> a >> b >> c >> d;
  int sum_a = a / 1000 + a / 100 % 10 + a / 10 % 10 + a % 10;
  int sum_b = b / 1000 + b / 100 % 10 + b / 10 % 10 + b % 10;
  int sum_c = c / 1000 + c / 100 % 10 + c / 10 % 10 + c % 10;
  int sum_d = d / 1000 + d / 100 % 10 + d / 10 % 10 + d % 10;
  if (sum_a % 2 == 0) {
    cnt += 1;
  } 
  if (sum_b % 2 == 0) {
    cnt += 1;
  } 
  if (sum_c % 2 == 0) {
    cnt += 1;
  } 
  if (sum_d % 2 == 0) {
    cnt += 1;
  } 
  cout << cnt;
  return 0;
} 
