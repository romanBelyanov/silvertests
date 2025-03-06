#include <iostream>
using namespace std;

int main(){
  int p, m, n;
  cin >> p >> m >> n;
  if (n <= p){
    cout << 2 * m;
  } else {
    cout << ((2 * n + p - 1) / p) * m;
  }
  return 0;
}
