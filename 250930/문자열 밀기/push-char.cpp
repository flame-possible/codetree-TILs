#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    input = input.substr(1, input.length() - 1) + input.substr(0, 1);

    cout << input;

    return 0;
}