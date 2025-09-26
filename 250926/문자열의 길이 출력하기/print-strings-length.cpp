#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    int result = 0;

    cin >> input;
    result += input.length();
    cin >> input;
    result += input.length();

    cout << result;

    return 0;
}