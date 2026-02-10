#include <iostream>
using namespace std;

int N;

int main() {
    // Please write your code here.

    cin >> N;

    int input[N][N];

    for(int i = 0; i < N; i++){
        for(int k = 0; k < N; k++){
            cin >> input[i][k];
        }
    }

    int result = 0;

    for(int y = 0; y < N - 2; y++){
        for(int x = 0; x < N - 2; x++){
            int temp = 0;

            for(int i = 0; i < 3; i++){
                for(int k = 0; k < 3; k++){
                    if(input[y + i][x + k]){
                        temp++;
                    }
                }
            }

            result = max(temp, result);
        }
    }

    cout << result;

    return 0;
}