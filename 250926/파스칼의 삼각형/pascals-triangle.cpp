#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[15][15] = {0,};

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        input[i][0] = 1;
    }
    input[1][1] = 1;

    for(int i = 2; i < n; i++){
        for(int k = 1; k < i; k++){
            input[i][k] = input[i-1][k-1] + input[i-1][k];
        }
        input[i][i] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < i + 1; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}