#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    getline(cin, input);

    for(int i = 2; i < 10; i++){
        cout << input[i];
    }

    return 0;
}