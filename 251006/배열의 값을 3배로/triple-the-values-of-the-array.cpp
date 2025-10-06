#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[3][3];

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            cin >> input[i][k];
            input[i][k] *= 3;

            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }


    return 0;
}