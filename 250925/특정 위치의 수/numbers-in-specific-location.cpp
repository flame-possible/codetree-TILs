#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int input[10] = {0,};

    for(int i = 0; i < 10; i++){
        cin >> input[i];
    }

    int result = input[2] + input[4] + input[9];

    cout << result;

    return 0;
}