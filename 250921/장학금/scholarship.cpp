#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int result = 0;

    if(a >= 90){
        if(b >= 95){
            result = 100000;
        }
        else if(b >= 90){
            result = 50000;
        }
    }

    cout << result;

    return 0;
}