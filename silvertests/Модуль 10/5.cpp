#include <iostream>
using namespace std;

int main() {
    int N, M, X, Y, mn, mx;
    cin >> N >> M >> X >> Y;
    if (M < N) {
        mn = M; mx = N;
    } else{
        mn = N; mx = M;
    }
    if (mn - X < X && mn - X < Y && mn - X < mx - Y) {
        cout << mn - X;
    } else if (X < Y && X < mx - Y){
        cout << X;
    } else if (Y < mx - Y) {
        cout << Y;
    } else {
        cout << mx - Y;
    }
    return 0;
}
