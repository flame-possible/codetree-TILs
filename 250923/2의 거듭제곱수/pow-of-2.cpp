#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int result = 0;
    int cnt = 0;

    while(result != n){

        cnt++;

        result = 1;

        for(int i = 0; i < cnt; i++){
            result *= 2;
        }

    }

    cout << cnt;

    return 0;
}