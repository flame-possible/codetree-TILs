#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    int result = 0;

    for(int i = 0; i < input.length(); i++){
        if(isdigit(input[i])){
            result += input[i] - '0';
        }
    }

    cout << result;

    return 0;
}