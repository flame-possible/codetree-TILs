#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, m;

    cin >> n >> m;

    while(n > 0){
        cout << n << '\n';

        n /= m;
    }

    return 0;
}