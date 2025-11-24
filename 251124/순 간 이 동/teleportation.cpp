#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int A, B, x, y;

    cin >> A >> B >> x >> y;

    int result = abs(B - A);

    int temp1 = abs(A - x) + abs(y - B);
    int temp2 = abs(A - y) + abs(x - B);

    result = min(result, min(temp1, temp2));

    cout << result;

    return 0;
}