#include <iostream>
#include <climits>
using namespace std;

int N, M;
int input[101];

int main() {
    // Please write your code here.

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int temp[N] = {0,};

    for(int i = 1; i <= 5000; i++){
        int cur = 0;
        int wall = 0;

        int result = 1;

        for(int k = 0; k < N; k++){
            if(input[k] > i){
                result = 0;
                break;
            }

            cur += input[k];

            if(cur <= i){
                continue;
            }
            else{
                if(cur - input[k] > i){
                    result = 0;
                    break;
                }
                // temp[wall] = cur - input[k];
                wall++;
                cur = input[k];
            }
        }

        wall++;

        if(wall <= M && result){
            cout << i;
            break;
        }
    }


    return 0;
}