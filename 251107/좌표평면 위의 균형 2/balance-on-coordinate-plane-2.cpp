#include <iostream>
#include <climits>
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
    int cnt[5] = {0,};

    for(int i = 2; i < 100; i += 2){

        for(int k = 2; k < 100; k += 2){

            for(int k = 0; k < 5; k++){
                cnt[k] = 0;
            }
            
            for(int p = 0; p < N; p++){
                if(input[p][0] < i){
                    if(input[p][1] < k){
                        cnt[3]++;
                    }
                    else{
                        cnt[4]++;
                    }
                }
                else{
                    if(input[p][1] < k){
                        cnt[2]++;
                    }
                    else{
                        cnt[1]++;
                    }
                }
            }
            
            result = min(max(cnt[4], max(cnt[3], max(cnt[1], cnt[2]))), result);
            
        }

    }

    cout << result;

    return 0;
}