#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    double N;

    cin >> N;

    N *= 30.48;

    cout << fixed;
    cout.precision(1);

    cout << N;

    return 0;
}