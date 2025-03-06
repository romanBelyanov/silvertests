#include <iostream>
using namespace std;

int main() {
  int five, four, three, two;
  cin >> five >> four >> three >> two;
  double med = (5 * five + 4 * four + 3 * three + 2 * two) / (five + four + three + two);
  if (3 > med){
    cout << five + four + three;
    return 0;
  } 
  if (4 > med) {
    cout << five + four;
    return 0;
  }
  if (5 > med) {
    cout << five;
    return 0;
  }
  return 0;
} 
