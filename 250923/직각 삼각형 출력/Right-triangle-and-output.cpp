#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 1;

    for(int i = 0; i < n; i++){
        for(int k = 0; k < cnt; k++){
            cout << "*";
        }
        cout << '\n';

        cnt += 2;
    }

    return 0;
}