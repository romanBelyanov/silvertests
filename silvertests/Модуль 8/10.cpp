#include <iostream>
using namespace std;

int main(){
  int kph, mps;
  cin >> kph >> mps;
  if (kph > mps*3.6){
    cout << kph << " kph" << endl;
  } else {
    cout << mps << " mps" << endl;
  }
  return 0;
}
