#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    cout << fixed;

    double a = 9.2 * 30.48;
    double b = 1.3 * 160934;

    cout.precision(1);

    cout << "9.2ft = " << a << "cm\n";
    cout << "1.3mi = " << b << "cm\n";

    return 0;
}