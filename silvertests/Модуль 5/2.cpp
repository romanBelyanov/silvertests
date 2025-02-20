#include <iostream>
using namespace std;

int main(){
  int n, hours, minutes;
  cin >> n;
  hours = n / 3600;
  minutes = n / 60 - hours * 60;
  cout << "It is " << hours << " hours " << minutes << " minutes.";
  return 0;
}
