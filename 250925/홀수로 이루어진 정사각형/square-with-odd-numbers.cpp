#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int cnt = 10 + (i * 2) + 1;

        for(int k = 0; k < n; k++){
            cout << cnt << ' ';
            cnt += 2;
        }

        cout << '\n';
    }

    return 0;
}