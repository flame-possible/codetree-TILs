#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    if(a <= 11 && b <= 11 && c < 11){
        cout << "-1\n";
        return 0;
    }

    int standard_sum = (11 * 1440) + (11 * 60) + 11;
    int sum = (a * 1440) + (b * 60) + c;

    cout << sum - standard_sum << '\n';

    return 0;
}