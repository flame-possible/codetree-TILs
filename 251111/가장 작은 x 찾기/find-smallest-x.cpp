#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N][2];

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    for(int i = 1; i <= 10000; i++){
        int cur = i;

        int pan = 1;

        for(int k = 0; k < N; k++){
            cur *= 2;

            if(cur < input[k][0] || cur > input[k][1]){
                pan = 0;
                break;
            }

        }

        if(pan){
            cout << i;
            break;
        }
    }

    return 0;
}