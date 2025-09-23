#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int p = 0; p < 2; p++){
        for(int i = 0; i < n; i++){
            for(int k = 0; k < n; k++){
                cout << "*";
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}