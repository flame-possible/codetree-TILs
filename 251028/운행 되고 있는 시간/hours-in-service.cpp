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

    int result = 0;

    for(int i = 0; i < N; i++){
        int time[1001] = {0,};

        for(int k = 0; k < N; k++){
            if(i == k) continue;
            
            for(int p = input[k][0]; p < input[k][1]; p++){
                time[p] = 1;
            }
            
        }

        int temp = 0;

        for(int k = 0; k < 1001; k++){
            temp += time[k];
        }

        if(result < temp){
            result = temp;
        }
    }

    cout << result;

    return 0;
}