#include <iostream>
#include <climits>
using namespace std;

int checked[6];

int input[6];
int temp[6];
int result = INT_MAX;

void solve(int cnt){
    if(cnt == 6){

        int a = temp[0] + temp[1];
        int b = temp[2] + temp[3];
        int c = temp[4] + temp[5];

        int min_val = min(min(a, b), c);
        int max_val = max(max(a, b), c);

        if(result > max_val - min_val){
            result = max_val - min_val;
        }

        return;
    }

    for(int i = 0; i < 6; i++){
        if(checked[i] == 0){
            temp[cnt] = input[i];
            checked[i] = 1;

            solve(cnt + 1);

            checked[i] = 0;
        }

    }
}

int main() {
    // Please write your code here.

    for(int i = 0; i < 6; i++){
        cin >> input[i];
    }

    solve(0);

    cout << result;

    return 0;
}