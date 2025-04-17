#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  if ((n / 100) * (n / 10 % 10) * (n % 10) < 1000 && (n / 100) * (n / 10 % 10) * (n % 10) >= 100){
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}
