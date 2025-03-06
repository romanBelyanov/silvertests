#include <iostream>
using namespace std;

int main(){
  int n, max;
  cin >> n;
  int second = n / 10 % 10;
  int third = n%10;
  if (second > third){
    max = second;
  } else if (third > second){
    max = third;
  }
  cout << max;
  return 0;
}
