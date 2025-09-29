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

    for(int i = 0; i < result.length(); i++){
        cout << result[i];

        if((i+1) % 5 == 0){
            cout << '\n';
        }
    }

    return 0;
}