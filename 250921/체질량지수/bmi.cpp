#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int h, w;

    cin >> h >> w;

    int result = (10000 * w) / (h * h);

    cout << result << '\n';

    if(result >= 25){
        cout << "Obesity";
    }

    return 0;
}