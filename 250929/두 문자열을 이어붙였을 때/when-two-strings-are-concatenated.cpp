#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string a, b;

    cin >> a >> b;

    string result1 = a + b, result2 = b + a;

    if(result1 == result2){
        cout << "true";
    }
    else{
        cout << "false";
    }

    

    return 0;
}