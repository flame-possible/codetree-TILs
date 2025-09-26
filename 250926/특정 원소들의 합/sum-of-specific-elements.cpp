#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[4][4] = {0,};

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 4; k++){
            cin >> input[i][k];
        }
    }

    int result = 0;

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < i + 1; k++){
            result += input[i][k];
        }
    }

    cout << result;

    return 0;
}