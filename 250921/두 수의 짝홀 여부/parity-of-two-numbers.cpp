#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a, b;

    cin >> a >> b;

    if(a & 1){
        cout << "odd";
    }
    else{
        cout << "even";
    }
    cout << '\n';

    if(b & 1){
        cout << "odd";
    }
    else{
        cout << "even";
    }
    cout << '\n';

    return 0;
}