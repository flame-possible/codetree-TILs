#include <iostream>
using namespace std;

int N;
int input[1001];

int pos[1001][1001];
int candidate[1001][1001];
int candidateCnt[1001];
int target[1001];
int check[1001];

int answer(int cnt){

    if(cnt == N){
        
        int result = 1;

        for(int i = 0; i < cnt - 1; i++){
            if(input[i] != target[i] + target[i+1]){
                result = 0;
                break;
            }
        }

        return result;

    }

    for(int i = 0; i < candidateCnt[cnt]; i++){
        if(!check[candidate[cnt][i]]){
            check[candidate[cnt][i]] = 1;

            target[cnt] = candidate[cnt][i];

            if(answer(cnt+1)){
                return 1;
            }

            check[candidate[cnt][i]] = 0;
        }
    }


    return 0;

}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 0; i < N - 1; i++){
        cin >> input[i];
    }

    for(int i = 0; i < N - 1; i++){
        for(int k = 1; k <= N; k++){
            if(k < input[i] && abs(k - input[i]) <= N && k != abs(k - input[i])){
                pos[i][k]++;
                pos[i+1][abs(k - input[i])]++;
            }
        }
    }

    int maxcnt[N] = {0,};

    for(int i = 0; i < N; i++){
        for(int k = 1; k <= N; k++){
            maxcnt[i] = max(maxcnt[i], pos[i][k]);
        }
    }

    for(int i = 0; i < N; i++){
        for(int k = 1; k <= N; k++){
            if(maxcnt[i] == pos[i][k]){
                candidate[i][candidateCnt[i]++] = k;
            }
        }

        // for(int k = 0; k < candidateCnt[i]; k++){
        //     cout << candidate[i][k] << ' ';
        // }
        // cout << '\n';
    }

    answer(0);

    for(int i = 0; i < N; i++){
        cout << target[i] << ' ';
    }

    return 0;
}