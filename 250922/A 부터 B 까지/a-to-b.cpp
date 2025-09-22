#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    int i = a;

    while(i <= b){
        cout << i << " ";

        if(i & 1){
            i *= 2;
        }
        else if(i % 2 == 0){
            i += 3;
        }
    }

    return 0;
}