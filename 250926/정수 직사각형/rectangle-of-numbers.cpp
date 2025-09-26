#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int cnt = 1;

    int n, m;

    cin >> n >> m;

    int input[n][m] = {0,};

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            input[i][k] = cnt++;

            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}