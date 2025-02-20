#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  double x, y;
  cin >> y;
  x = y - trunc(y);
  cout << fixed << x;
  return 0;
}
