#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int input[1001];

int main() {
    // Please write your code here.

    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    sort(input, input + N);

    for(int i = N; i >= 1; i--){
        int result = 0;
        for(int k = 0; k < N - i + 1; k++){
            if((input[k+i-1] - input[k]) <= K){
                result = 1;
                break;
            }
        }

        if(result){
            cout << i;
            break;
        }
    }

    return 0;
}