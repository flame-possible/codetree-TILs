#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    string input;

    string result;
    for(int i = 0; i < n; i++){
        cin >> input;

        result += input;
    }

    cout << result;

    return 0;
}