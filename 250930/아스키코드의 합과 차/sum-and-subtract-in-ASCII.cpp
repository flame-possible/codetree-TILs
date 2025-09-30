#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char a, b;

    cin >> a >> b;


    cout << (int) a + b << ' ';
    
    if(a < b){
        cout << (int) b - a;
    }
    else{
        cout << (int) a - b;
    }

    return 0;
}