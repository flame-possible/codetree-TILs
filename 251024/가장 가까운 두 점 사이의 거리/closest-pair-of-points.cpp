#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N][2];

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    int result = INT_MAX;

    for(int i = 0; i < N-1; i++){
        for(int k = i + 1; k < N; k++){
            int tempy = pow(abs(input[i][0] - input[k][0]), 2);
            int tempx = pow(abs(input[i][1] - input[k][1]), 2);

            result = min(result, tempy + tempx);
        }
    }

    cout << result;

    return 0;
}