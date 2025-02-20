#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double x, y, res;
  cin >> x >> y;
  res = x*y/2;
  cout << fixed << setprecision(3) << res;
  return 0;
}
