#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    for(int i = input.length() - 1; i >= 0; i--){
        if(i & 1){
            cout << input[i];
        }
    }

    return 0;
}