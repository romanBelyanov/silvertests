#include <iostream>
using namespace std;

int main(){
  int n, first, second, third, fourth;
  cin >> n;
  first = n / 1000;
  second = (n / 100) % 10;
  third = (n / 10) % 10;
  fourth = n % 10;
  cout << second << first << fourth << third;
  return 0;
}
