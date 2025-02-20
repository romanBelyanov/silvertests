#include <iostream>
using namespace std;

int main(){
  double x, y, res;
  cin >> x >> y;
  res = ((x+y)/(x+1))-((x*y-12)/(34+x));
  cout << res;
  return 0;
}
