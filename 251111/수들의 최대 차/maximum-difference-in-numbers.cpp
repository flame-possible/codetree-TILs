#include <iostream>
using namespace std;

int N, K;
int input[1001];
int temp[1001];

int answer(int cur, int cnt, int tar){
    if(cnt == tar){
        int temp_max = 0;
        int temp_min = 10001;

        for(int i = 0; i < cnt; i++){
            temp_max = max(temp_max, temp[i]);
            temp_min = min(temp_min, temp[i]);
        }

        if((temp_max - temp_min) <= K){
            return 1;
        }
        else{
            return 0;
        }
    }

    int result = 0;

    for(int i = cur; i < N; i++){
        temp[cnt++] = input[i];

        result = answer(i + 1, cnt, tar);

        if(result) return 1;

        cnt--;

    }

    return 0;

}

int main() {
    // Please write your code here.

    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    for(int i = N; i >= 1; i--){
        if(answer(0, 0, i)){
            cout << i;
            break;
        }
    }

    return 0;
}