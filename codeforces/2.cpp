#include <iostream>
using namespace std;

int main(){
    int n, num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        int prisons = (num + 1) / 2;
        int dots = num - prisons;
        for (int j = 0; j < num; j++){
            for (int g = 0; g < 2; g++){
                int dots_copy = dots;
                int prisons_copy = prisons;
                while (!(dots_copy == 0 && prisons_copy == 0)){
                    if (j % 2 == 0){
                        cout << "##";
                        prisons_copy--;
                        if (prisons_copy == 0 && dots_copy == 0){
                            break;
                        }
                        cout << "..";
                        dots_copy--;
                    } else if (j % 2 == 1){
                        cout << "..";
                        dots_copy--;
                        if (prisons_copy == 0 && dots_copy == 0){
                            break;
                        }
                        cout << "##";
                        prisons_copy--;
                    }
                }
                cout << endl;
            }
            int new_num = prisons;
            prisons = dots;
            dots = new_num;
        }
    }
    return 0;
}
