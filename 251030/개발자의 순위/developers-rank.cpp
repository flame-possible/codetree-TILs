#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, K;

    cin >> K >> N;

    int input[K+1][N+1];

    for(int i = 0; i < K; i++){
        for(int k = 0; k < N; k++){
            cin >> input[i][k];
        }
    }

    int pan[N+1][K+1];

    for(int cur = 1; cur <= N; cur++){
        for(int i = 0; i < K; i++){
            for(int k = 0; k < N; k++){
                if(input[i][k] == cur){
                    pan[cur][i] = k;
                }
            }
        }
    }

    int result = 0;

    for(int cur = 1; cur <= N; cur++){

        for(int k = 1; k <= N; k++){
            if(cur == k) continue;
            
            int temp = 1;
            
            for(int i = 0; i < K; i++){
                if(pan[cur][i] > pan[k][i]){
                    temp = 0;
                    break;
                }
            }

            if(temp) result++;

        }

    }

    cout << result;

    return 0;
}