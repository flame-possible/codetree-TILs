#include <iostream>
using namespace std;

int N;
int input[1001];

int target[1001];
int check[1001];

int answer(int cnt){

    if(cnt == N){
        
        int result = 1;

        for(int i = 0; i < cnt - 1; i++){
            if(input[i] != target[i] + target[i+1]){
                result = 0;
                break;
            }
        }

        return result;

    }

    for(int i = 1; i <= N; i++){
        if(!check[i]){
            check[i] = 1;

            target[cnt++] = i;

            if(answer(cnt--)){
                return 1;
            }

            check[i] = 0;
        }
    }


    return 0;

}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 0; i < N - 1; i++){
        cin >> input[i];
    }

    answer(0);

    for(int i = 0; i < N; i++){
        cout << target[i] << ' ';
    }

    return 0;
}