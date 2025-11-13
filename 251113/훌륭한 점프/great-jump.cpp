#include <iostream>
using namespace std;

int N, K;
int input[101];

int answer(int tar){

    int temp[101] = {0,};
    int tempCnt = 1;

    for(int i = 1; i < N-1; i++){
        if(input[i] <= tar){
            temp[tempCnt++] = i;
        }
    }

    temp[tempCnt++] = N-1;

    for(int i = 0; i < tempCnt - 1; i++){
        if(K < abs(temp[i] - temp[i+1])){
            return 0;
        }
    }

    return 1;

}

int main() {
    // Please write your code here.

    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int result = 0;

    for(int i = 100; i >= max(input[0], input[N-1]); i--){
        if(answer(i)){
            result = i;
        }
    }

    cout << result;

    return 0;
}