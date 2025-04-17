#include <iostream>
using namespace std;

int main(){
  int x, y;
  int scores_W = 0, scores_E = 0;
  for (int i = 0; i < 2; i++){
    cin >> x >> y;
    if (x == 0 && y == 0){
      scores_W += 50;
    } else if (x*x + y*y <= 25){
      scores_W += 30;
    } else if (x*x + y*y <= 100){
      if (x*y >= 0){
        scores_W += 20;
      } else {
        scores_W += 15;
      }
    }
  }
  for (int i = 0; i < 2; i++){
    cin >> x >> y;
    if (x == 0 && y == 0){
      scores_E += 50;
    } else if (x*x + y*y <= 25){
      scores_E += 30;
    } else if (x*x + y*y <= 100){
      if (x*y >= 0){
        scores_E += 20;
      } else {
        scores_E += 15;
      }
    }
  }
  if (scores_W > scores_E){
    cout << "W" << ' ' << scores_W;
  } else if (scores_E > scores_W){
    cout << "E" << ' ' << scores_E;
  } else {
    cout << "W=E" << ' ' << scores_W;
  }
  return 0;
}
