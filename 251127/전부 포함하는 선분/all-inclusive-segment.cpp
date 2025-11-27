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

    int result = 100;

    for(int i = 0; i < N; i++){
        int l = 100;
        int r = 0;

        for(int k = 0; k < N; k++){
            if(i == k) continue;

            l = min(l, input[k][0]);
            r = max(r, input[k][1]);

        }

        result = min(result, r - l);
    }

    cout << result;

    return 0;
}