#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a[10] = {0,};

    int result = 0;

    for(int i = 0; i < 10; i++){
        cin >> a[i];

        result += a[i];
    }

    cout << result;

    return 0;
}