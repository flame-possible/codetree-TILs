#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char input[10] = {0,};

    for(int i = 0; i < 10; i++){
        cin >> input[i];
    }

    cout << input[1] << ' ' << input[4] << ' ' << input[7];

    return 0;
}