#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int k = n; k > i; k--){
            cout << "*";
        }

        for(int k = 0; k < i; k++){
            cout << "  ";
        }
        
        for(int k = n; k > i; k--){
            cout << "*";
        }

        cout << '\n';
    }

    return 0;
}