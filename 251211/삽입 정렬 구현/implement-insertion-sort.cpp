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

    for(int i = 1; i < N; i++){
        int key = input[i];

        for(int k = i - 1; k >= 0; k--){
            if(input[k] > key){
                input[k+1] = input[k];
                input[k] = key;
            }
            else{
                break;
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout << input[i] << ' ';
    }

    return 0;
}