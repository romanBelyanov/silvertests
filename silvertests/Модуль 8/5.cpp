#include <iostream>
using namespace std;

int main(){
  long long a, b;
  cin >> a >> b;
  if (a > b){
    a = a*3;
    b = b*2;
  } else if (a < b) {
    a = a*2;
    b = b*3;
  }
  cout << a << " " << b;
  return 0;
}
