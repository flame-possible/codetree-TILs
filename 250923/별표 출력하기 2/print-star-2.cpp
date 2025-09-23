#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = n; i > 0; i--){
        for(int k = i; k > 0; k--){
            cout << "* ";
        }
        cout << '\n';
    }

    return 0;
}