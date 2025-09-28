#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input;

    cin >> input;
    
    int cnt;

    cin >> cnt;

    for(int i = input.length() - 1; i >= input.length() - cnt; i--){
        cout << input[i];
    }

    return 0;
}