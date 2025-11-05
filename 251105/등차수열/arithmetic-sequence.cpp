#include <iostream>
using namespace std;

int N;
int input[100];

int answer(int k){

    int temp = 0;

    for(int i = 0; i < N - 1; i++){
        for(int p = i + 1; p < N; p++){
            if(abs(input[i] - k) == abs(input[p] - k)){
                temp++;
            }
        }
    }

    return temp;
}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int result = 0;

    for(int k = 1; k < 100; k++){
        result = max(result, answer(k));
    }


    cout << result;

    return 0;
}