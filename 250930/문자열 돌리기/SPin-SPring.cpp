#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    cout << input << '\n';

    for(int i = 0; i < input.length(); i++){
        input = input.substr(input.length() - 1, 1) + input.substr(0, input.length() - 1);

        cout << input << '\n';
    }

    return 0;
}