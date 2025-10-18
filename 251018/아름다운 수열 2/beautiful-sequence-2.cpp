#include <iostream>

using namespace std;

int N, M;
int A[100], B[100];
int check[101];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) cin >> A[i];

    for (int i = 0; i < M; i++){
        cin >> B[i];
        check[B[i]]++;
    }

    int result = 0;

    for(int i = 0; i <= N - M; i++){
        int temp[101] = {0,};
        int ans = 1;

        for(int k = i; k < i + M; k++){
            temp[A[k]]++;
        }

        for(int k = 1; k <= 100; k++){
            if(check[k] != temp[k]){
                ans = 0;
                break;
            }
        }

        if(ans){
            result++;
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}