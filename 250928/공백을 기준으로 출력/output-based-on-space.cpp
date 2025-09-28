#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input1, input2;

    getline(cin, input1);
    getline(cin, input2);

    for(int i = 0; i < input1.length(); i++){
        if(input1[i] != ' '){
            cout << input1[i];
        }
    }

    for(int i = 0; i < input2.length(); i++){
        if(input2[i] != ' '){
            cout << input2[i];
        }
    }

    return 0;
}