#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int input[7];

    for(int i = 0; i < 7; i++){
        cin >> input[i];
    }

    sort(input, input + 7);

    int a = input[0];
    int b = input[1];
    int c = input[6] - a - b;

    cout << a << ' ' << b << ' ' << c;

    return 0;
}