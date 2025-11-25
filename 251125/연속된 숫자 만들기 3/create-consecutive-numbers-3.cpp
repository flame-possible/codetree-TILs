#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int input[3];

    cin >> input[0] >> input[1] >> input[2];

    int result = max((input[1] - input[0]), (input[2] - input[1]));

    cout << result - 1;

    return 0;
}