#include <iostream>
using namespace std;

int main(){
  double x, y;
  cin >> x;
  y = 1-x*x+2.5*x*x*x+x*x*x*x;
  y = y*y;
  cout << y;
  return 0;
}
