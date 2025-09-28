#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input[4];

    for(int i = 0; i < 4; i++){
        cin >> input[i];
    }

    for(int i = 3; i >= 0; i--){
        cout << input[i] << '\n';
    }

    return 0;
}