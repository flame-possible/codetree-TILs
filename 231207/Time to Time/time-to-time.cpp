#include <iostream>

using namespace std;

int main() {
    
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int sum_a = (a*60) + b, sum_b = (c*60) + d;

    cout << sum_b - sum_a << '\n';


    return 0;
}