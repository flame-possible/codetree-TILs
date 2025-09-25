#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n] = {0,};

    int output[n] = {0,};

    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> input[i];

        if(input[i] % 2 == 0){
            output[cnt++] = input[i];
        }
    }

    for(int i = 0; i < cnt; i++){
        cout << output[i] << ' ';
    }

    return 0;
}