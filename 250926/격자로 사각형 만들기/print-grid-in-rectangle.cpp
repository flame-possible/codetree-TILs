#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n][n] = {0,};

    for(int i = 0; i < n; i++){
        input[i][0] = 1;
        input[0][i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int k = 1; k < n; k++){
            input[i][k] = input[i - 1][k] + input[i][k - 1] + input[i-1][k-1];
        }
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}