#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 0;

    while(n != 1){
        if(n & 1){
            n *= 3;
            n++;
        }
        else{
            n /= 2;
        }
        cnt++;
    }

    cout << cnt;

    return 0;
}