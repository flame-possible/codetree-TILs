#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){

        for(int k = n; k > i + 1; k--){
            cout << " ";
        }

        for(int k = 0; k < (2 * i) + 1; k++){
            cout << "*";
        }

        cout << '\n';

    }


    for(int i = n - 1; i > 0; i--){
        for(int k = i; k < n; k++){
            cout << " ";
        }

        for(int k = 0; k < (2 * i) - 1; k++){
            cout << "*";
        }

        cout << '\n';
    }


    // Please write your code here.

    return 0;
}
