#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    bool threat1 = abs(x1 - x2) == abs(y1 - y2);
    bool threat2 = abs(x1 - x3) == abs(y1 - y3);

    if (threat1 && threat2) {
        cout << "double" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
