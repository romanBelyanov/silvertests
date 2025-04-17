#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n, p;
    double r;
    cin >> t;
    cin >> n;
    cin >> p;
    r = static_cast<double>(p) / 100.0;
    double future_value = n * pow(1 + r, t);
    cout.precision(15);
    cout << future_value;
    return 0;
}
