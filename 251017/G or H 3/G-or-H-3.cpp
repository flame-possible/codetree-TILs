#include <iostream>

using namespace std;

int N, K;
char c[10001];

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp >> c[temp];
    }

    int result = 0;

    for(int i = 1; i <= 10000 - K + 1; i++){
        int temp = 0;
        for(int k = 0; k <= K; k++){
            if(c[i + k] == 'G'){
                temp++;
            }
            else if(c[i + k] == 'H'){
                temp += 2;
            }
        }

        if(result < temp){
            result = temp;
        }
    }

    cout << result;

    // Please write your code here.

    return 0;
}