#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, m;

    cin >> n >> m;

    int input[n+1][n+1] = {0,};

    for(int i = 0; i < m; i++){
        int y, x;

        cin >> y >> x;

        input[y][x] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}