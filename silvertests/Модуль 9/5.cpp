#include <iostream>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  if (2000 <= n && n <= 2199){
    cout << "CM";
  }
  else if (2200 <= n && n <= 2399){
    cout << "FM";
  }
  else if (2400 <= n && n <= 2499){
    cout << "IM";
  }
  else if (2500 <= n){
    cout << "GM";
  }
  else {
    cout << "NO";
  }
  return 0;
}
