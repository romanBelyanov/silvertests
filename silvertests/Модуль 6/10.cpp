#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double S, res = 0;
  double PI = 3.141592653589793238463;
  cin >> S;
  res = sqrt(4*S*PI);
  cout << fixed << setprecision(6) << res;
  return 0;
}
