#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n] = {0,};

    int output[10] = {0,};

    for(int i = 0; i < n; i++){
        cin >> input[i];

        output[input[i]]++;
    }

    for(int i = 1; i < 10; i++){
        cout << output[i] << '\n';
    }


    return 0;
}