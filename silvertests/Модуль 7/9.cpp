#include <iostream>
using namespace std;

int main(){
  long long A, X, Y, W, H;
  cin >> A >> X >> Y >> W >> H;
  cout << ((X+W+A-1)/A-X/A)*((Y+H+A-1)/A-Y/A);
  return 0;
}
