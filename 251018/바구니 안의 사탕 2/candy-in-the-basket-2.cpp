#include <iostream>

using namespace std;

int N, K;
int candy[100], pos[100];
int pan[402];

int main() {
    cin >> N >> K;

    int max_cnt = 0;

    for (int i = 0; i < N; i++) {
        cin >> candy[i] >> pos[i];

        pan[pos[i]] += candy[i];

        if(pos[i] > max_cnt){
            max_cnt = pos[i];
        }
    }

    int result = 0;

    for(int i = 0; i <= max_cnt - K; i++){
        int temp = 0;
        for(int k = i; k < i + (2 * K) + 1; k++){
            temp += pan[k];
        }

        if(temp > result){
            result = temp;
        }
    }

    cout << result;



    // Please write your code here.

    return 0;
}