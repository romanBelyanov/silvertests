#include <iostream>
using namespace std;

int main(){
  int n, z = 1;
  cin >> n;
  for(int i = 1; i <= n; i++){
    z = z * 2;
  }
  cout << z;
  return 0;
}
