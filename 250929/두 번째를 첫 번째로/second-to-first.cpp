#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    char tar = input[1];

    for(int i = 1; i < input.length(); i++){
        if(input[i] == tar){
            input[i] = input[0];
        }
    }

    cout << input;

    return 0;
}