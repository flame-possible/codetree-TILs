#include <iostream>

using namespace std;

int main() {
    
    int N;

    int input[1001] = {0,};
    int num[1001] = {0,};
    int cnt = 0;

    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    num[cnt]++;
    for(int i = 2; i <= N; i++){
        if(input[i-1] != input[i]){
            cnt++;
        }
        num[cnt]++;
    }

    int max = 0;
    for(int i = 0; i <= cnt; i++){
        if(num[i] > max){
            max = num[i];
        }
    }

    cout << max << '\n';

    return 0;
}