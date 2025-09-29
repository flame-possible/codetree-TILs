#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    input[1] = 'a';
    input[input.length() - 2] = 'a';

    cout << input;

    return 0;
}