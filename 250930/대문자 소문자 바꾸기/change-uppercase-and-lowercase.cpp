#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(isupper(input[i])){
            cout << (char) tolower(input[i]);
        }
        else{
            cout << (char) toupper(input[i]);
        }
    }

    return 0;
}