#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    char a = input[0];
    char b = input[1];

    for(int i = 0; i < input.length(); i++){
        if(input[i] == b){
            input[i] = a;
        }
        else if(input[i] == a){
            input[i] = b;
        }
    }

    cout << input;

    return 0;
}