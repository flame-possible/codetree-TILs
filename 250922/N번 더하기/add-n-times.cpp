#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, n;

    cin >> a >> n;

    a += n;

    int i = 1;

    while(i <= n){
        cout << a << '\n';
        a += n;
        i++;
    }

    return 0;
}