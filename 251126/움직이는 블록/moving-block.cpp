#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    int sum = 0;

    for(int i = 0; i < N; i++){
        cin >> input[i];

        sum += input[i];
    }

    sum /= N;

    int result = 0;

    for(int i = 0; i < N; i++){
        if(input[i] > sum){
            result += input[i] - sum;
        }
    }

    cout << result;

    return 0;
}