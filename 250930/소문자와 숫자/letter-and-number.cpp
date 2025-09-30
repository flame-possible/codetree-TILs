#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(isalpha(input[i])){
            cout << (char) tolower(input[i]);
        }
        else if(isdigit(input[i])){
            cout << input[i];
        }
    }

    return 0;
}