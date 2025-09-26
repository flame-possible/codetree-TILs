#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char input[5][3] = {0,};

    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 3; k++){
            cin >> input[i][k];

            input[i][k] -= 'a' - 'A';
            cout << input[i][k] << ' ';
        }

        cout << '\n';
    }

    return 0;
}