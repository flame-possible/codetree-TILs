#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 0;

    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= i; k++){
            cout << ++cnt << ' ';
        }
        cout << '\n';
    }

    return 0;
}