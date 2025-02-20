#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n, cnt = 0;
  cin >> n;
  while (n != 0){
    cnt += pow(n % 10, 2);
    n /= 10;
  }
  cout << cnt;
  return 0;
}
