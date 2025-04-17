#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    cin >> age;

    cout << "Vam " << age << " ";

    if (age % 10 == 1 && age % 100 != 11) {
        cout << "god" << endl;
    } else if ((age % 10 == 2 && age % 100 != 12) || (age % 10 == 3 && age % 100 != 13) || (age % 10 == 4 && age % 100 != 14)) {
        cout << "goda" << endl;
    } else {
        cout << "let" << endl;
    }

    return 0;
}
