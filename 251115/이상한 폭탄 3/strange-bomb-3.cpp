#include <iostream>
using namespace std;

int N, K;
int input[101];
int check[101];
int result[1000001];

int answer(int cnt){

    int result = 1;

    check[cnt] = 1;

    for(int i = 1; i <= 3; i++){
        if(input[cnt] == input[cnt + i] && !check[cnt + i]){
            check[cnt + i] = 1;
            result += answer(cnt + i);
        }
    }

    return result;

}

int main() {
    // Please write your code here.

    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    for(int i = 0; i < N; i++){
        if(!check[i]){
            result[input[i]] += answer(i);
        }
    }

    int maxCnt = 0;

    for(int i = 0; i <= 1000000; i++){
        maxCnt = max(maxCnt, result[i]);
    }

    for(int i = 1000000; i >= 0; i--){
        if(maxCnt == result[i]){
            cout << i;
            break;
        }
    }

    return 0;
}