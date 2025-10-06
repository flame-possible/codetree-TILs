#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int k = 0; k < (i * 2) - 1; k++){
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}