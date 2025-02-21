#include <iostream> 
#include <cmath> 
#include <iomanip> 

using  namespace  std; 
int main () {
  long long R;
  double P;
  int M; 
  cin >> R >> P >> M;
  double r = P / 100 / 12;
  double payment = (R * r * pow(1 + r , M)) / (pow(1 + r , M) - 1);
  double overpayment = payment * M - R;
  cout << fixed << setprecision (2) << overpayment << endl;
  return 0;
}
