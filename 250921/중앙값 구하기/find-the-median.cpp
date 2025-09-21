#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    int temp = a;

    if((temp < b && temp > c) || (temp < c && temp > b)){
        cout << temp;
    }
    else{
        temp = b;

        if((temp < a && temp > c) || (temp < c && temp > a)){
            cout << temp;
        }
        else{
            cout << c;
        }
    }

    return 0;
}