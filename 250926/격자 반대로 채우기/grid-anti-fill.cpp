#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n+1][n+1] = {0,};

    int dir = 0;
    int cnt = 1;

    for(int i = n; i > 0; i--){

        if(dir == 0){

            for(int k = n; k > 0; k--){
                input[k][i] = cnt++;
            }

            dir++;
        }
        else{

            for(int k = 1; k <= n; k++){
                input[k][i] = cnt++;
            }

            dir--;
        }

    }

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}