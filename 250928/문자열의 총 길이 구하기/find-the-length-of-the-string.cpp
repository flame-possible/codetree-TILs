#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string input[10];

    int result = 0;

    for(int i = 0; i < 10; i++){
        cin >> input[i];

        result += input[i].length();
    }

    cout << result;

    return 0;
}