#include <iostream>
using namespace std;

int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

int n, m;

int check(int y, int x){
    if(y < 0 || y >= n || x < 0 || x >= m){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    // Please write your code here.


    cin >> n >> m;

    char input[n][m];

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){
            cin >> input[i][k];
        }
    }

    int result = 0;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < m; k++){

            if(input[i][k] == 'L'){
                for(int p = 0; p < 8; p++){
                    if(check(i + dy[p], k + dx[p]) && check(i + (dy[p] * 2), k + (dx[p] * 2))){
                        if(input[i + dy[p]][k + dx[p]] == 'E' && input[i + (dy[p] * 2)][k + (dx[p] * 2)] == 'E'){
                            result++;
                        }
                    }
                }
            }
        }
    }

    cout << result;



    return 0;
}