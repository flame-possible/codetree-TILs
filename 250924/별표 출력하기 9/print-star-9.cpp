#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int k = i; k < n - 1; k++){
            cout << "  ";
        }

        for(int k = 0; k < (2 * i) + 1; k++){
            cout << "* ";
        }
        cout << '\n';
    }

    return 0;
}