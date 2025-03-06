#include <iostream>
using namespace std;

int main(){
  int n, one = 0, ten = 0, sixty = 0;
  cin >> n;
  sixty += n / 60;
  n = n % 60;
  if (n >= 35){
    sixty++;
    n = 0;
  }
  ten += n / 10;
  n = n % 10;
  if (n >= 9){
    ten++;
    n = 0;
  }
  one = n / 1;
  cout << one << " " << ten << " " << sixty;
  return 0;
}
