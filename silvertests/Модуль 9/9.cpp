#include <iostream>
using namespace std;

int main(){
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if ((max(x1, x2) - min(x1, x2)) == (max(y1, y2) - min(y1, y2)) || (x1 == x2 or y1 == y2)){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
  return 0;
}
