#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c){
    cout << "on growth!";
  }
  else {
    cout << "dont on growth!";
  }
  return 0;
}
