#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int p = n; p > 0; p--){
        for(int i = p; i > 0; i--){
            for(int k = 0; k < p; k++){
                cout << "*";
            }
            cout << ' ';
        }
        cout << '\n';
    }

    return 0;
}