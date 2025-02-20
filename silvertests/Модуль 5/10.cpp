#include <iostream>
using namespace std;

int main(){
  long long M, K, S;
  cin >> M >> K >> S;
  bool a = (M >= K + S);
  bool b = !a;
  cout << ((K + S) * (int) a + (K + S) % M * (int) b);
  return 0;
}
