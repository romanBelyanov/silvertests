#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double x, y, z, res;
  cin >> z >> x >> y;
  res = z/(x+y);
  cout << fixed << setprecision(6) << res;
  return 0;
}
