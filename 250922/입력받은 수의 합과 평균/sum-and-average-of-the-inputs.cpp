#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int sum = 0;

    for(int i = 0; i < n; i++){
        int temp;

        cin >> temp;

        sum += temp;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (double) sum / n;

    return 0;
}