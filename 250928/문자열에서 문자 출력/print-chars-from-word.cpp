#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    for(int i = 0; i < input.length(); i++){
        cout << input[i] << '\n';
    }

    return 0;
}