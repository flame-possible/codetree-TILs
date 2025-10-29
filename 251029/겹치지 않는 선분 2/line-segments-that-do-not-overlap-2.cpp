#include <iostream>
using namespace std;

int input[100][2];

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1];
    }

    int result = N;

    for(int i = 0; i < N; i++){

        int temp = 0;

        for(int k = 0; k < N; k++){
            if(i == k) continue;

            if(input[i][0] < input[k][0]){
                if(input[i][1] > input[k][1]){
                    temp = 1;
                }
            }
            else if(input[i][0] > input[k][0]){
                if(input[i][1] < input[k][1]){
                    temp = 1;
                }
            }
        }

        if(temp){
            result--;
        }
    }

    cout << result;

    return 0;
}