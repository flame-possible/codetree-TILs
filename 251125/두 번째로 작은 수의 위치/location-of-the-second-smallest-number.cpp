#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];
    int pan[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
        pan[i] = input[i];
    }

    sort(pan, pan + N);

    int ans = pan[1];

    if(pan[0] == pan[1]){
        for(int i = 1; i < N; i++){
            if(ans != pan[i]){
                ans = pan[i];
                break;
            }
        }
    }

    int cnt = 0;
    int result = 0;

    for(int i = 0; i < N; i++){
        if(ans == input[i]){
            result = i;
            cnt++;
        }
    }

    if(cnt > 1){
        cout << "-1";
    }
    else{
        cout << result + 1;
    }

    return 0;
}