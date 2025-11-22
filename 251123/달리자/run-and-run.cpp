#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input1[N];
    int input2[N];

    for(int i = 0; i < N; i++){
        cin >> input1[i];
    }
    for(int i = 0; i < N; i++){
        cin >> input2[i];
    }

    int temp[N];

    for(int i = 0; i < N; i++){
        temp[i] = input2[i] - input1[i];
    }

    int result = 0;

    for(int i = 0; i < N -1; i++){
        result += abs(temp[i]);

        temp[i+1] += temp[i];
    }

    cout << result;

    return 0;
}