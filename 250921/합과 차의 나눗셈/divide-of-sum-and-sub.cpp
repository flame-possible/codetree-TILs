#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    double result = (double) (a + b) / (a - b);

    cout << fixed;
    cout.precision(2);

    cout << result;

    return 0;
}