#include <iostream>
using namespace std;

int N;
int input[11][2];

int check(int a, int b, int c){
    for(int i = 0; i < N - 1; i++){
        if(i == a || i == b || i == c) continue;

        for(int k = i + 1; k < N; k++){
            if(k == a || k == b || k == c) continue;

            if(input[i][0] < input[k][0]){
                if(input[i][1] >= input[k][0]){
                    return 0;
                }
            }
            else if(input[i][0] > input[k][0]){
                if(input[i][0] <= input[k][1]){
                    return 0;
                }
            }
            else{
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    int result = 0;

    for(int i = 0; i < N - 2; i++){
        for(int k = i + 1; k < N - 1; k++){
            for(int p = k + 1; p < N; p++){
                result += check(i, k, p);
            }
        }
    }

    cout << result;

    return 0;
}