#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[6];
    int sum = 0;

    for(int i = 0; i < 6; i++){
        cin >> input[i];

        sum += input[i];
    }

    int result = sum;

    for(int i = 0; i < 4; i++){
        for(int k = i + 1; k < 5; k++){
            for(int p = k + 1; p < 6; p++){
                if(result > abs(sum - (input[i] + input[k] + input[p]) - (input[i] + input[k] + input[p]))){
                    result = abs(sum - (input[i] + input[k] + input[p]) - (input[i] + input[k] + input[p]));
                }
            }
        }
    }

    cout << result;

    return 0;
}