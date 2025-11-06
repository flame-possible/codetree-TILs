#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int result = INT_MAX;

    for(int i = 0; i < N; i++){

        input[i] *= 2;

        for(int k = 0; k < N; k++){
            
            int temp = 0;
            int tempArr[N-1] = {0,};
            int cnt = 0;

            for(int p = 0; p < N; p++){
                if(k == p) continue;

                tempArr[cnt++] = input[p];

            }

            for(int p = 0; p < cnt-1; p++){
                temp += abs(tempArr[p] - tempArr[p+1]);
            }

            result = min(result, temp);

        }

        input[i] /= 2;
    }

    cout << result;

    return 0;
}