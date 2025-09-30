#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;

    cin >> a >> b;

    int ab_val = stoi(a + b);
    int ba_val = stoi(b + a);

    int result = ab_val + ba_val;

    cout << result;

    return 0;
}