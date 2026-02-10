#include <iostream>
using namespace std;

int N, M;
int result;
int input[201][201];

void cornerBlock(int y, int x){
    int temp[4] = {input[y][x], input[y+1][x], input[y][x+1], input[y+1][x+1]};
    int sum = temp[0] + temp[1] + temp[2] + temp[3];

    for(int i = 0; i < 4; i++){
        result = max(result, sum - temp[i]);
    }
}

int main() {
    // Please write your code here.

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int k = 0; k < M; k++){
            cin >> input[i][k];
        }
    }

    for(int i = 0; i < N - 1; i++){
        for(int k = 0; k < M - 1; k++){
            cornerBlock(i, k);
        }
    }

    for(int i = 0; i < N; i++){
        for(int k = 0; k < M - 2; k++){
            result = max(result, input[i][k] + input[i][k+1] + input[i][k+2]);
        }
    }

    for(int i = 0; i < M; i++){
        for(int k = 0; k < N - 2; k++){
            result = max(result, input[k][i] + input[k+1][i] + input[k+2][i]);
        }
    }

    cout << result;



    return 0;
}