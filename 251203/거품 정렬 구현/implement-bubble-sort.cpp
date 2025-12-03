#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    int result = 0;

    while(!result){
        result = 1;

        for(int i = 0; i < N - 1; i++){
            if(input[i] > input[i+1]){
                int temp = input[i+1];
                input[i+1] = input[i];
                input[i] = temp;

                result = 0;
            }
        }

    }

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }

    return 0;
}