#include <iostream>
using namespace std;

int main(){
  long long x;
  cin >> x;
  cout << ((x/10) * (x/10+1)) * 100 + 25;
  return 0;
}
