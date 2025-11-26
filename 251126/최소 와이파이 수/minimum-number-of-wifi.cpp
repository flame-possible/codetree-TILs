#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, M;

    cin >> N >> M;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int checked[N] = {0,};

    int result = 0;

    for(int i = 0; i < N; i++){
        if(!checked[i] && input[i]){
            result++;
            int ceil = max(N-1, i + M + M);

            for(int k = i; k <= ceil; k++){
                checked[k] = 1;
            }
        }
    }

    cout << result;

    return 0;
}