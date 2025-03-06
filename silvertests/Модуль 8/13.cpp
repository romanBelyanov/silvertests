#include <iostream>
using namespace std;

int main(){
  int num1, num2, num3, num4, mx;
  cin >> num1 >> num2 >> num3 >> num4;
  mx = num1;
  if (num2 >= mx){
    mx = num2;
  }
  if (num3 >= mx){
    mx = num3;
  }
  if (num4 >= mx){
    mx = num4;
  }
  cout << mx << endl;
  return 0;
}
