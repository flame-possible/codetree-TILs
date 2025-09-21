#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = n;

    for(int i = 0; i < 5; i++){
        cout << result << ' ';
        result += n;
    }

    return 0;
}