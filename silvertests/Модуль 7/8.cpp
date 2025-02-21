#include <iostream>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  cout << 1-((x%y) * (y%x));
  return 0;
}
