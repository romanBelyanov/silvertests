#include <iostream>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  if (a % b == 0){
    cout << a / b;
  } else {
    cout << "not completely divisible";
  }
  return 0;
}
