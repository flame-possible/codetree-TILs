#include <iostream>
using namespace std;

int N, M;

int main() {
    // Please write your code here.

    cin >> N >> M;

    int input[N][N];

    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            cin >> input[i][k];
        }
    }

    int result = 0;

    for(int i = 0; i < N; i++){
        int cur = input[i][0];
        int cnt = 0;

        for(int k = 0; k < N; k++){
            
            if(cur == input[i][k]){
                cnt++;
            }
            else{
                cnt = 1;
            }

            if(cnt >= M){
                result++;
                break;
            }
        }
    }

    for(int i = 0; i < N; i++){
        int cur = input[0][i];
        int cnt = 0;

        for(int k = 0; k < N; k++){
            
            if(cur == input[k][i]){
                cnt++;
            }
            else{
                cnt = 1;
            }

            if(cnt >= M){
                result++;
                break;
            }
        }
    }

    cout << result;

    return 0;
}