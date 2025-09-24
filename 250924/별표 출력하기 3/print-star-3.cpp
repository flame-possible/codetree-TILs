#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < i * 2; k++){
            cout << " ";
        }

        for(int k = 0; k < ((2 * n) - 1) - (2 * i); k++){
            cout << "* ";
        }

        cout << '\n';
    }

    return 0;
}