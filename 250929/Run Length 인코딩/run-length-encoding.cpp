#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.

    char tar = A[0];
    int cnt = 0;

    int result_cnt = 0;

    char result_char[1000] = {0,};
    int result_int[1000] = {0,};

    for(int i = 0; i < A.length(); i++){
        if(tar == A[i]){
            cnt++;

            if(i == A.length() - 1){
                result_char[result_cnt] = tar;
                result_int[result_cnt++] = cnt;
                // cout << tar << cnt;
            }
        }
        else{
            result_char[result_cnt] = tar;
            result_int[result_cnt++] = cnt;

            // cout << tar << cnt;
            tar = A[i];
            cnt = 1;
        }
    }

    int result_len = result_cnt;

    for(int i = 0; i < result_cnt; i++){
        int temp = result_int[i];

        while(temp > 0){
            temp /= 10;
            result_len++;
        }
    }

    cout << result_len << '\n';

    for(int i = 0; i < result_cnt; i++){
        cout << result_char[i] << result_int[i];
    }

    return 0;
}
