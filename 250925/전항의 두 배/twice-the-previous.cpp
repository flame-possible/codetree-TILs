#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    cin >> input[0] >> input[1];

    for(int i = 2; i < 10; i++){
        input[i] = input[i-1] + (2 * input[i-2]);
    }

    for(int i = 0; i < 10; i++){
        cout << input[i] << ' ';
    }

    return 0;
}