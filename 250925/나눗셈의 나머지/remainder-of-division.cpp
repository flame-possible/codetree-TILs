#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int output[10] = {0,};

    while(a >= 1){
        output[a % b]++;

        a /= b;
    }

    int result = 0;

    for(int i = 0; i < 10; i++){
        result += output[i] * output[i];
    }

    cout << result;

    return 0;
}