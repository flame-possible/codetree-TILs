#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int pp, p;

    cin >> pp >> p;

    cout << pp << ' ' << p << ' ';

    for(int i = 3; i <= 10; i++){
        int temp = (pp + p) % 10;
        pp = p;
        p = temp;

        cout << temp << ' ';
    }

    return 0;
}