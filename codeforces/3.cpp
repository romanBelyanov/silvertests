#include <iostream>
#include <string>
using namespace std;

int main(){
    string time;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> time;
        int hours = (time[0] - '0') * 10 + time[1] - '0';
        int minutes = (time[3] - '0') * 10 + time[4] - '0';
        if (minutes < 10){
            if (hours == 0){
                cout << "12:" << "0" << minutes << " AM" << endl;
            } else if (hours == 12){
                cout << "12:" << "0" << minutes << " PM" << endl;
            } else if (hours > 12){
                if (hours - 12 < 10){
                    cout << "0" << hours - 12 << ":" << "0" << minutes << " PM" << endl;
                } else if (hours - 12 >= 10){
                    cout << hours - 12 << ":" << "0" << minutes << " PM" << endl;
                }
            } else {
                if (hours < 10){
                    cout << "0" << hours << ":" << "0" << minutes << " AM" << endl;
                } else if (hours >= 10){
                    cout << hours << ":" << "0" << minutes << " AM" << endl;
                }
            }
        } else if (minutes >= 10){
            if (hours == 0){
                cout << "12:" << minutes << " AM" << endl;
            } else if (hours == 12){
                cout << "12:" << minutes << " PM" << endl;
            } else if (hours > 12){
                if (hours - 12 < 10){
                    cout << "0" << hours - 12 << ":" << minutes << " PM" << endl;
                } else if (hours - 12 >= 10){
                    cout << hours - 12 << ":" << minutes << " PM" << endl;
                }
            } else {
                if (hours < 10){
                    cout << "0" << hours << ":" << minutes << " AM" << endl;
                } else if (hours >= 10){
                    cout << hours << ":" << minutes << " AM" << endl;
                }
            }
        }
    }
    return 0;
}
