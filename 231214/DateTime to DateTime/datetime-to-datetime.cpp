#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    int standard_sum = (11 * 1440) + (11 * 60) + 11;
    int sum = (a * 1440) + (b * 60) + c;

    int result = sum - standard_sum;

    if(result < 0){
        cout << "-1\n";
    }
    else{
        cout << result << '\n';
    }

    return 0;
}