#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int N = 15;

    int input[N];

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }

    sort(input, input + N);

    int a = input[0];
    int b = input[1];
    int c = input[2];
    int d = input[14] - a - b - c;

    cout << a << ' ' << b << ' ' << c << ' ' << d;


    return 0;
}