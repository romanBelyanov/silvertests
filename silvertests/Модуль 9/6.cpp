#include <iostream>
using namespace std;
 
int main(){
  int n, res;
  cin >> n >> res;
  if (res == 1 && n != 1 || res != 1 && n == 1){
    cout << "NO";
  }
  else {
    cout << "YES";
  }
  return 0;
}
