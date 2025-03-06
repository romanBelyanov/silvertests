#include <iostream>
using namespace std;

int main(){
  int adult, child;
  cin >> adult >> child;
  if (adult == 0 && child != 0){
    cout << "Impossible";
  } else if (adult == 0 && child == 0){
    cout << "0 0";
  } else if (adult != 0 && child == 0){
    cout << adult << " " << adult;
  } else if (adult >= child){
    cout << adult << " " << adult + child - 1;
  } else if (adult < child){
    cout << child << " " << adult + child - 1;
  }
  return 0;
}
