#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    int result1 = a + b + c;
    int result2 = (a + b + c) / 3;
    int result3 = result1 - result2;

    cout << result1 << '\n' << result2 << '\n' << result3;

    return 0;
}