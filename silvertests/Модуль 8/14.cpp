#include <iostream>
using namespace std;

int main(){
  int n, r, f, s;
  cin >> n >> r >> f >> s;
  if (r < f) {
    if (r < s) {
      cout << "R";
      return 0;
    } 
    if (r > s) {
      cout << "S";
      return 0;
    } 
  } 
  if (r > f) {
    if (f < s) {
      cout << "F";
      return 0;
    } 
    if (f > s) {
      cout << "S";
      return 0;
    } 
  } 
  return 0;
} 
