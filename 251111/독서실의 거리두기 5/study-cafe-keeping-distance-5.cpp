#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    string input;

    cin >> input;

    int result = 0;

    for(int i = 0; i < N; i++){
        if(input[i] == '1') continue;

        input[i] = '1';

        int temp[21] = {0,};
        int tempCnt = 0;
        int tempResult = 21;

        for(int k = 0; k < N; k++){
            if(input[k] == '1'){
                temp[tempCnt++] = k;
            }
        }

        for(int k = 0; k < tempCnt - 1; k++){
            tempResult = min(tempResult, abs(temp[k] - temp[k+1]));
        }

        input[i] = '0';

        result = max(result, tempResult);

    }

    cout << result;


    return 0;
}