#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double a, b, res1, res2, res3, res4;
  cin >> a >> b;
  res1 = (a+b)/2;
  res2 = sqrt(a*b);
  res3 = (2*a*b)/(a+b);
  res4 = sqrt((pow(a, 2) + pow(b, 2))/2);
  cout << fixed << setprecision(6) << res1 << endl << res2 << endl << res3 << endl << res4 << endl;
  return 0;
}
