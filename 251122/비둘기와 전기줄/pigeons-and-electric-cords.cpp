#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[11];

    for(int i = 1; i < 11; i++){
        input[i] = -1;
    }

    int result = 0;

    for(int i = 0; i < N; i++){
        int a, b;

        cin >> a >> b;

        if(input[a] == -1){
            input[a] = b;
        }
        else{
            if(input[a] != b){
                result++;
                input[a] = b;
            }
        }
    }

    cout << result;

    return 0;
}