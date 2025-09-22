#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 1;

    while(n > 1){
        n /= cnt;
        cnt++;
    }

    cout << cnt - 1;

    return 0;
}