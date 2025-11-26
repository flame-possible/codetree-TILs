#include <iostream>
using namespace std;

int N;
int input[101];

void ans(int cnt){
    int temp[101] = {0,};

    int target = input[1];

    for(int i = 2; i <= cnt; i++){
        temp[i-1] = input[i];
    }

    for(int i = 1; i < cnt; i++){
        input[i] = temp[i];
    }

    input[cnt] = target;
}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    for(int i = 1; i <= N; i++){
        if(input[1] == 1){
            for(int k = N; k > 1; k--){
                if(input[k] < input[k-1]){
                    ans(k-1);
                    break;
                }
            }
        }
        else{
            for(int k = N; k > 1; k--){
                if(input[k] < input[1]){
                    ans(k);
                    break;
                }
            }
        }

        int result = 1;

        for(int k = 1; k <= N; k++){
            if(input[k] != k){
                result = 0;
            }
        }

        if(result){
            cout << i;
            break;
        }
    }

    return 0;
}