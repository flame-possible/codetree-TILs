#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    while(1){
        cin >> input;

        if(input == "END"){
            break;
        }

        for(int i = input.length() - 1; i >= 0; i--){
            cout << input[i];
        }

        cout << '\n';
    }

    return 0;
}