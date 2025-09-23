#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;

    cin >> n;

    int cnt = 0;

    while(n <= 1000){

        if(n & 1){
            n *= 2;
            n += 2;
        }
        else{
            n *= 3;
            n++;
        }

        cnt++;

    }

    cout << cnt;

    return 0;
}