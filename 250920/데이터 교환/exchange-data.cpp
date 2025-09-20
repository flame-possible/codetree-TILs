#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a = 5, b = 6, c = 7;

    int temp = a;
    a = b;
    b = temp;

    temp = c;
    c = a;
    a = temp;

    cout << a << '\n' << b << '\n' << c;

    return 0;
}