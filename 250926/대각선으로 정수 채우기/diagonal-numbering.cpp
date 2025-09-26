#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, m;

    cin >> n >> m;

    int input[n][m] = {0,};

    int cury = 0, curx = 0;

    int cnt = 1;

    while(cury != n - 1 || curx != m - 1){

        for(int i = cury, k = curx; i < n && k >= 0; i++, k--){
            input[i][k] = cnt++;
        }

        curx++;

        if(curx >= m){
            curx--;
            cury++;
        }
    }
    
    input[cury][curx] = cnt;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            cout << input[i][k] << ' ';
        }
        cout << '\n';
    }

    return 0;
}