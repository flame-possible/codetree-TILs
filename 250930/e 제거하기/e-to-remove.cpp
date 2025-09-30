#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    input.erase(input.find('e'), 1);

    cout << input;

    return 0;
}