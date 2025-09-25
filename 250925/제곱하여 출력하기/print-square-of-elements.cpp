#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int input[n] = {0,};

    for(int i = 0; i < n; i++){
        cin >> input[i];

        cout << input[i] * input[i] << ' ';
    }

    return 0;
}