#include <iostream>
using namespace std;

int N;
int input[101];

int main() {
    // Please write your code here.

    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> input[i];
    }

    int result = 1;

    for(int i = N; i > 1; i--){
        if(input[i] > input[i-1]){
            result++;
        }
        else{
            break;
        }
    }

    cout << N - result;

    return 0;
}