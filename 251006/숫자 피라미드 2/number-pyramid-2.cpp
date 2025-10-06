#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int result = 1;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < i + 1; k++){
            cout << result++ << ' ';
        }
        cout << '\n';
    }

    return 0;
}