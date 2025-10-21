#include <iostream>
#include <climits>
using namespace std;

int N, H, T;
int input[101];

int main() {
    // Please write your code here.

    cin >> N >> H >> T;

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int result = INT_MAX;

    for(int i = 0; i <= N - T; i++){
        int temp = 0;
        for(int k = i; k < i + T; k++){
            if(input[k] != H){
                temp += abs(input[k] - H);
            }
        }

        if(result > temp){
            result = temp;
        }
    }

    cout << result;

    return 0;
}