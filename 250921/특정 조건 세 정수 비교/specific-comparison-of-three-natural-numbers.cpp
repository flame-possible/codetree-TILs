#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b, c;

    cin >> a >> b >> c;

    int temp = a < b ? a : b;
    int min = temp < c ? temp : c;

    if(a == min){
        cout << '1';
    }
    else{
        cout << '0';
    }
    cout << ' ';

    if(a == b && b == c){
        cout << '1';
    }
    else{
        cout << '0';
    }

    return 0;
}