#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if (a - c >= 1 && b - c >= 1){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}
