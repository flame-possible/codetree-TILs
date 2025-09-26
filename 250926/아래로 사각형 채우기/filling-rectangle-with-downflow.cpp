#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n][n] = {0,};

    int cnt = 1;

    for(int k = 0; k < n; k++){
        for(int i = 0; i < n; i++){
            input[i][k] = cnt++;
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