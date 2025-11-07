#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, M;

    cin >> N >> M;

    int input[N+1];

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    int result = 0;

    for(int i = 1; i <= N; i++){
        int temp = 0;
        int cur = i;

        for(int k = 0; k < M; k++){
            temp += input[cur];

            cur = input[cur];
        }

        result = max(result, temp);
    }

    cout << result;

    return 0;
}