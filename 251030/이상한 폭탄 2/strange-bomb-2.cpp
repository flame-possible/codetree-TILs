#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, K;

    cin >> N >> K;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int result = -1;

    for(int i = 0; i < N; i++){
        for(int k = i - K; k <= i + K; k++){
            if(k < 0 || k == i || k >= N) continue;

            if(input[i] == input[k]){
                result = max(input[i], result);
            }
        }
    }

    cout << result;

    return 0;
}