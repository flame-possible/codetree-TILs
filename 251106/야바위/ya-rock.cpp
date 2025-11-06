#include <iostream>
using namespace std;

int cup[4];

void swap(int a, int b){

    int temp = cup[a];
    cup[a] = cup[b];
    cup[b] = temp;

    return;
}

int main() {
    // Please write your code here.

    int N;

    cin >> N;

    int input[N][3];

    for(int i = 0; i < N; i++){
        cin >> input[i][0] >> input[i][1] >> input[i][2];
    }

    int result = 0;

    for(int i = 1; i <= 3; i++){

        for(int k = 1; k <= 3; k++){
            cup[k] = 0;
        }

        cup[i] = 1;

        int temp = 0;

        for(int k = 0; k < N; k++){
            swap(input[k][0], input[k][1]);

            if(cup[input[k][2]]){
                temp++;
            }
        }

        result = max(result, temp);

    }

    cout << result;

    return 0;
}