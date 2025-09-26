#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[4][4] = {0,};
    int result[4] = {0,};

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            cin >> input[i][k];

            result[i] += input[i][k];
        }
        cout << result[i] << '\n';
    }

    return 0;
}