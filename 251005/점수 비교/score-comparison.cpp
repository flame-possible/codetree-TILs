#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a_a, a_b, b_a, b_b;

    cin >> a_a >> a_b >> b_a >> b_b;

    if(a_a > b_a && a_b > b_b){
        cout << "1";
    }
    else{
        cout << "0";
    }

    return 0;
}