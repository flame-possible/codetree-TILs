#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int N, K;

    cin >> N >> K;

    int input[N] = {0,};

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    sort(input, input + N);

    int min_value = input[0];
    int max_value = input[N-1];

    int result = INT_MAX;

    for(int i = min_value; i < max_value - K + 1; i++){
        int temp = 0;

        for(int k = 0; k < N; k++){
            if(input[k] < i){
                temp += abs(input[k] - i);
            }
            else if(input[k] > i + K){
                temp += abs(input[k] - (i + K));
            }
            
        }

        result = min(result, temp);
    }

    cout << result;

    return 0;
}