#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = 0;

    for(int i = n; i <= 100; i++){
        result += i;
    }

    cout << result;

    return 0;
}