#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N, L;

    cin >> N >> L;

    int input[N] = {0,};
    int cnt[101] = {0,};

    for(int i = 0; i < N; i++){
        cin >> input[i];

        cnt[input[i]]++;
    }

    int result = 0;

    for(int i = 100; i >= 1; i--){

        int sum = 0;

        for(int k = i; k <= 100; k++){
            sum += cnt[k];
        }

        if(sum >= i){
            cout << i;
            result = 1;
            break;
        }

        if(cnt[i - 1] >= (i - sum) && (i - sum) <= L){
            cout << i;
            result = 1;
            break;
        }

    }

    if(!result){
        cout << "0";
    }

    return 0;
}