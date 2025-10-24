#include <iostream>
#include <climits>
using namespace std;

int checked[5];

int input[5];
int temp[5];
int result = INT_MAX;

void solve(int cnt){
    if(cnt == 5){

        int a = temp[0] + temp[1];
        int b = temp[2] + temp[3];
        int c = temp[4];

        if(a != b && b != c && a != c){
            int min_val = min(min(a, b), c);
            int max_val = max(max(a, b), c);

            if(result > max_val - min_val){
                result = max_val - min_val;
            }
        }

        return;
    }

    for(int i = 0; i < 5; i++){
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

    for(int i = 0; i < 5; i++){
        cin >> input[i];
    }

    solve(0);

    if(result == INT_MAX){
        cout << "-1";
    }
    else{
        cout << result;
    }

    return 0;
}