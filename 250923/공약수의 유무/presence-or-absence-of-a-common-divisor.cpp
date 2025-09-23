#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int result = 0;

    for(int i = a; i <= b; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            result = 1;
            break;
        }
    }

    cout << result;

    return 0;
}