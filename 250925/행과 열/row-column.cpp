#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    for(int i = 1; i <= a; i++){
        int cnt = i;
        for(int k = 1; k <= b; k++){
            cout << cnt << ' ';
            cnt += i;
        }
        cout << '\n';
    }

    return 0;
}