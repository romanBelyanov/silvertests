#include <iostream>
using namespace std;

int main(){
  int x;
  cin >> x;
  if (x == 0){
    cout << 0 << endl;
  } else {
    cout << x*x - x - 1 << endl;
  }
  return 0;
}
