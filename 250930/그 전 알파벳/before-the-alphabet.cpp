#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char a;

    cin >> a;

    a--;

    if(a < 'a'){
        a = 'z';
    }

    cout << a;

    return 0;
}