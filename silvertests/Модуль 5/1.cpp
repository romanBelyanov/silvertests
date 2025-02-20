#include <iostream>
using namespace std;

int main(){
  int n, hours, minutes;
  cin >> n;
  hours = n / 60;
  minutes = n % 60;
  cout << hours << ":" << minutes;
  return 0;
}
