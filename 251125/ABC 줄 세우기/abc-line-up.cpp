#include <iostream>
using namespace std;

int N;
char input[26];

int main() {
    // Please write your code here.

    cin >> N;

    int cnt[N] = {0,};
    for(int i = 0; i < N; i++){
        cin >> input[i];
        cnt[i] = input[i] - ('A' + i);
    }

    char cur = 'A' + N - 1;
    int result = 0;

    while(cur != 'A' - 1){

        for(int i = 0; i < N; i++){
            if(input[i] == cur){
                result += abs(cnt[i]);
                if(cnt[i] > 0){
                    for(int k = i + 1; k < N; k++){
                        char temp = input[k];
                        input[k] = input[k - 1];
                        input[k-1] = temp;
                        
                        int temp1 = cnt[k] + 1;
                        cnt[k] = cnt[k - 1] - 1;
                        cnt[k - 1] = temp1;
                    }
                }
                else if(cnt[i] < 0){
                    for(int k = i - 1; k >= 0; k--){
                        char temp = input[k];
                        input[k] = input[k + 1];
                        input[k+1] = temp;
                        
                        int temp1 = cnt[k] + 1;
                        cnt[k] = cnt[k + 1] - 1;
                        cnt[k + 1] = temp1;
                    }
                }

                break;
            }
        }

        cur--;

    }

    cout << result;

    return 0;
}