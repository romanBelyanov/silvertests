#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  cout << "water - " << n << " kg" << endl;
  cout << "cherry - " << n * 3 << " kg" << endl;
  cout << "sugar - " << n * 2 << " kg" << endl;
  cout << "jam - " << n + n * 3 + n * 2<< " kg" << endl;
  return 0;
}
