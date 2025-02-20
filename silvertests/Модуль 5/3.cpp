#include <iostream>
using namespace std;

int main(){
  long long n, hours, minutes, seconds;
  cin >> n;
  hours = (n / 3600) % 24;
  minutes = (n / 60 - hours * 60) % 60;
  seconds = (n - (hours * 3600 + minutes * 60)) % 60;
  cout << hours << ":";
  printf("%02d", minutes);
  cout << ":";
  printf("%02d", seconds);
  return 0;
}
