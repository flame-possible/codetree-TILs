#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = 1;

    for(int i = 1; i <= 10; i++){
        result *= i;

        if(result >= n){
            cout << i;
            break;
        }
    }

    return 0;
}