#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    string input;

    cin >> input;

    int result = 0;

    for(int i = 0; i < N - 1; i++){

        if(input[i] != '1'){
            input[i] = '1';
        }
        else{
            continue;
        }

        for(int k = i + 1; k < N; k++){

            if(input[k] != '1'){
                input[k] = '1';
            }
            else{
                continue;
            }

            int temp[N] = {0,};
            int tempCnt = 0;

            for(int p = 0; p < N; p++){
                if(input[p] == '1'){
                    temp[tempCnt++] = p;
                }
            }

            int tempResult = N;

            for(int p = 0; p < tempCnt - 1; p++){
                tempResult = min(tempResult, abs(temp[p] - temp[p + 1]));
            }
            
            result = max(result, tempResult);

            input[k] = '0';

        }

        input[i] = '0';

    }

    cout << result;

    return 0;
}