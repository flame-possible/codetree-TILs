#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[5][5] = {0,};

    for(int i = 0; i < 5; i++){
        input[0][i] = 1;
        input[i][0] = 1;
    }

    for(int i = 1; i < 5; i++){
        for(int k = 1; k < 5; k++){
            input[i][k] = input[i-1][k] + input[i][k-1];
        }
    }

    for(int i = 0; i < 5; i++){
        for(int k = 0; k < 5; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}