#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n+1][n+1];

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            if(i & 1){
                input[k][i] = k;
            }
            else{
                input[n - k + 1][i] = k;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            cout << input[i][k];
        }
        cout << '\n';
    }

    return 0;
}