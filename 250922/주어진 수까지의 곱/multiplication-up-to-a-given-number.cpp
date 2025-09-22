#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int result = 1;

    for(int i = a; i <= b; i++){
        result *= i;
    }

    cout << result;

    return 0;
}