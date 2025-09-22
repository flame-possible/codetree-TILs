#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int sum = 0, cnt = 0;

    for(int i = 0; i < 10; i++){
        int input;

        cin >> input;

        if(input >= 0 && input <= 200){
            sum += input;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << ' ' << (double) sum / cnt;

    return 0;
}