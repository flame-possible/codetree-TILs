#include <iostream>
using namespace std;

char input[10][10];

int main() {
    // Please write your code here.

    int L[2], R[2], B[2];

    for(int i = 0; i < 10; i++){
        for(int k = 0; k < 10; k++){
            cin >> input[i][k];

            if(input[i][k] == 'B'){
                B[0] = i;
                B[1] = k;
            }
            else if(input[i][k] == 'R'){
                R[0] = i;
                R[1] = k;
            }
            else if(input[i][k] == 'L'){
                L[0] = i;
                L[1] = k;
            }
        }
    }

    int result = 0;

    if((B[0] < R[0] && L[0] > R[0]) || (L[0] < R[0] && B[0] > R[0])){
        if(B[1] == R[1] && R[1] == L[1]){
            result += 2;
        }
    }
    else if((B[1] < R[1] && L[1] > R[1]) || (L[1] < R[1] && B[1] > R[1])){
        if(B[0] == R[0] && R[0] == L[0]){
            result += 2;
        }
    }

    result += abs(B[0] - L[0]) + abs(B[1] - L[1]) - 1;

    cout << result;

    return 0;
}