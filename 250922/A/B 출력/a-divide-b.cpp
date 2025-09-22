#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    cout << a / b << ".";

    a = a % b;
    a *= 10;

    for(int i = 0; i < 20; i++){
        cout << a / b;
        
        a = a % b;
        a *= 10;
    }

    return 0;
}