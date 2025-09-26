#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    int input[n][m] = {0,};

    int cnt = 0;

    for(int i = 0; i < m; i++){
        if(i & 1){
            for(int k = n - 1; k >= 0; k--){
                input[k][i] = cnt++;
            }
        }
        else{
            for(int k = 0; k < n; k++){
                input[k][i] = cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    // Please write your code here.

    return 0;
}
